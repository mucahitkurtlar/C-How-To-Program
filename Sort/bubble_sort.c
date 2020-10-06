#include <stdio.h>

int main(){
  int temp, integers[10]; //10lu int array oluşturduk
  for(int i = 0; i<10; i++) //for ile kullanıcı dizi elemanlarına değer atadı
    scanf("%d", &integers[i]);
  for (int i = 1; i<10; i++){
    for (int j = 0; j<10-i; j++){
      if(integers[j] > integers[j+1]){//eğer dizideki bir önceki eleman sonrakinden büyükse if bloğuna girer
        temp = integers [j];//ilk değer swapping için olan temp değişkenine atanır
        integers[j] = integers[j+1];//ilk değere sonraki değer atanır
        integers[j+1] = temp;//son olarak temp sonraki değere atanı ve dizinin ardışık iki elemanı yer değiştirmiş olur
      }
    }
  }
  for(int i = 9; i>=0; i--)
    printf("%d\n", integers[i]);
}
