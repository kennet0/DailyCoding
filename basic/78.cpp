//78. 원더랜드(Kruskal MST 알고리즘 : Union&Find 활용)
//원더랜드에 문제가 생겼다. 원더랜드의 각 도로를 유지보수하는 재정이 바닥난 것이다. 원더랜드는 모든 도시를 서로 연결하면서 최소의 유지비용이 들도록 도로를 선택하고 나머지 도로는 폐쇄하려고 한다.
//아래의 그림은 그 한 예를 설명하는 그림이다.
//15 15
//17
//위의 지도는 각 도시가 1부터 9로 표현되었고, 지도의 오른쪽은 최소비용 196으로 모든 도시 를 연결하는 방법을 찾아낸 것이다.
//▣ 입력설명
//첫째 줄에 도시의 개수 V(1≤V≤25)와 도로의 개수 E(1≤E≤200가 주어진다. 다음 E개의 줄에 는 각 도로에 대한 정보를 나타내는 세 정수 A, B, C가 주어진다. 이는 A번 도시와 B번 도시 가 유지비용이 C인 도로로 연결되어 있다는 의미이다. C는 값이 1,000,000을 넘지 않는다.
//▣ 출력설명
//모든 도시를 연결하면서 드는 최소비용을 출려한다.

#include <iostream>
#include <vector>
#include <string>

using namespace std;
int unf[1001];

struct Edge{
    int v1,v2,val;
    Edge(int a, int b, int c){
        v1=a;
        v2=b;
        val=c;
    }
    bool operator<(const Edge &b)const{
        return val <  b.val;
    }
    
};

int Find(int v){
    if(v==unf[v]) return v;
    else return unf[v] = Find(unf[v]);
    
}
void Union(int a, int b){
    a=Find(a);
    b=Find(b);
    if(a!=b) unf[a]=b;
}

int main() {
    freopen("input.txt", "rt", stdin);
    int v,e,a,b,c, res=0;
    vector<Edge> ed;
    cin >> v >> e;
    for(int i=1;i<=v;i++){
        unf[i]=i;
    }
    for(int i=1;i<=e;i++){
        cin >> a >> b >> c;
        ed.push_back(Edge(a, b, c));
    }
    sort(ed.begin(),ed.end());
    for(int i=0;i<e;i++){
        int fa = Find(ed[i].v1);
        int fb = Find(ed[i].v2);
        if(fa!=fb) {
            res += ed[i].val;
            Union(ed[i].v1,ed[i].v2);
        }
    }
    cout << res;
}

