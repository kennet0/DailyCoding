#include <iostream>
#include <string>

using namespace std;

int main()
{

  char word[20];
  scanf("%s",word);
  for(int i = 0; i < 20; i++){
    if(word[i] == '\0') break;
    printf("\'%c\'\n", word[i]);
  }

  return 0;
}