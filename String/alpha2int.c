#include <stdio.h>

int alpha2int(char[]);

int main(){
  int num;
  char str[] = "12345abc8ef";
  num = alpha2int(str);
  printf("%d\n", num);
  return 0;
}
int alpha2int(char str[]){
  int num = 0;//int değeri toplayıp göndermek için int değişken oluşturuyoruz
  for(int i = 0; str[i] != '\0'; i++){//string sonuna kadar karakter kontrol ediliyor
    if(('0' <= str[i]) && (str[i] <= '9')){//eğer karakter 0-9 aralığı bir ascii değerine sahipse...
      num += str[i] - '0';//...bu sayının ascii değerini int değişkene ata ve referans noktasın olan 0'ın ascii değerini çıkar
      num *= 10;//olası sonraki rakam için yer aç
    }
    else
      break;//eğer string içinde karaktere rastlanırsa döngüden çık
  }
  return num /= 10;//son durumdaki 10 ile çarpmayı geri alıp gönderiyoruz
}
