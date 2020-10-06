#include <stdio.h>

int main(){
  int *pointer, a=15, b[10];
  for(int i = 0; i<10; i++){
    b[i] = i;
  }
  pointer=&a;
  printf("%d\n", *pointer);//a'nın değerini(15) basar
  printf("%p\n", pointer);//a'nın bellek konumunu basar
  printf("%d\n", a);//a'nın değerini basar
  printf("%p\n", &a);//a'nın bellek konumunu basar
  pointer=b;//b dizisinin ilk elemanını pointer gösterir
  printf("%d\n", b[4]);//b dizisinin 4. elemanını basar
  printf("%d\n", *(pointer + 4));//b dizisinin 4. elemanını basar
  return 0;
}
