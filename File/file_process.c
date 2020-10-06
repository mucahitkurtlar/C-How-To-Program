#include <stdio.h>

int main(){
  char name[20];
  int grade;
  FILE *write; //Üzerine yazmak istediğimiz dosyayı pointer olarak alabilmek için FILE tipi değişkeni gösteren pointer tanımlıyoruz
  
  if((write = fopen("file_name", "w")) == NULL){ //fopen() içine açmak istediğimiz dosyayı ve hangi amaçla açtığımızı "w/r" yazıyoruz
    puts("The file couldn't be opened!"); //dosyayı açma işlemi başarısız olursa akışı buraya yöneltiyor
  }
  else{ //dosya açılmasında sorun yoksa else bloğu devreye giriyor
    puts("Enter the grade and the name.");
    puts("Enter eof to end input."); 
    scanf("%d %s", &grade, name);
    while(!feof(stdin)){ //kullanıcı feof girene kadar veri alınıp dosyaya yazılacak
      fprintf(write, "%d\t%s\n", grade, name); //fprintf() ile dosyaya verileri yazıyoruz
      scanf("%d %s", &grade, name);
    }
    fclose(write); //işlem bitince dosyayı kapatıyoruz
  }
  return 0;
}
