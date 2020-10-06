/* 
Bu program tek satırlık yorumları silip başka bir dosya üzerine yazmaktadır. 
Temizlenecek dosyayı karakter karakter kontrol edip temizleme yapar.
Alınan karakter "/" ise sonraki karakterin de "/" olup olmadığını kontrol eder.
Eğer ikinci karakter de "/" ise satır sonuna kadar ignore eder ve alt satıra geçip yazmaya devam eder.
Eğer ikinci karakter de "/" değilse alınan ilk karakteri (yani "/"ı) yazılacak dosyaya geri koyar.
Eğer ilk karakter "/" değilse doğrudan karakter karakter kopyalama işlemine devam eder.
*/


#include <stdio.h>

int main(){
  char c, c2;
  FILE *write; //Üzerine yazmak istediğimiz dosyayı pointer olarak alabilmek için FILE tipi değişkeni gösteren pointer tanımlıyoruz
  FILE *read;
  
  if(((write = fopen("write_file.c", "w")) == NULL)||((read = fopen("read_file.c", "r")) == NULL)){ //fopen() içine açmak istediğimiz dosyayı ve hangi amaçla açtığımızı "w/r" yazıyoruz
    puts("The file couldn't be opened!"); //dosyayı açma işlemi başarısız olursa akışı buraya yöneltiyor
  }
  else{
    while(1){
      c = fgetc(read); //temizleyeceğimiz dosyadan karakter alıyoruz
      if(feof(read)){ //eğer bu karakter dosyanın sonu olduğunu belirtiyorsa döngüden çık
        break;
      }
      if(c == '/'){
        c2 = fgetc(read); //alınan karakter "/" ise sonraki karaktere de bak
        if(c2 == '/'){
          while(c2 = fgetc(read)){
            if(c2 == '\n'){ //eğer sonraki karakter de "/" ise "\n"  kadar yürü
            fputc('\n', write); //yazılacak dosyada alt satıra geç
            break; //dögüden çık
            }
          }
        }
        else{
          ungetc(c2, read); //eğer "/"dan sonraki karakter de "/" değilse alınan sonraki karakteri yerine koy
          fputc('/', write); //gereksiz kaldırılan "/"ı geri yazılacak dosyaya koy
        }
      }
      else{
        fputc(c, write); // eğer alınan ilk karakter "/" değilse sonrakini kontrol etmeden direkt yazılacak dosyaya yaz
      }
    }
    fclose(write); //işlem bitince dosyayı kapatıyoruz
    fclose(read);
  }
  return 0;
}
