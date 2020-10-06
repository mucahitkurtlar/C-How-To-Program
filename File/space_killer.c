#include <stdio.h>
#define SIZE 100

int main(){
  char charset[SIZE];
    for(int i = 0; charset[i - 1] != '\n'; i++)//terminalden okuma yaparken boşlukları da okumak için karakterleri tek tek array'e atıyoruz
      scanf("%c", &charset[i]);
    for(int i = 0; i < SIZE; i++){
      if(charset[i] == ' '){//array içinde boşluk bulunursa boşluktan sonraki kısım bir öne kaydırılıyor
        for(int j = i; j < SIZE - i; j++)
          charset[j] = charset[j + 1];
      }
    }
        printf("%s\n", charset);
        return 0;
}
