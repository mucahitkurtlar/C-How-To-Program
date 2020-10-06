#include <stdio.h>

int length(char[]);

int main(){
  char str[] = "mali arap faik'ten aliyorduk...";
  printf("%d\n", length(str));
  return 0;
}
int length(char str[]){
  int i = 0;
  for(i = 0; str[i] != '\0'; i++){}
  return i;
}
