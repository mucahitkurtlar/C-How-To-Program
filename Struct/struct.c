#include <stdio.h>

struct student{ //student isminde struct oluşturduk
  char *name; //bu scope içinde struct üyelerinin sahip olabileceği özllikleri oluşturduk
  char *id;
  int age;
};

int main(){
  struct student student1; //student1 isimli student tipinde değişken oluşturduk
  struct student student2; //student2 isimli student tipinde değişken oluşturduk
  student1.name = "Ali"; // "." ile student1 değişkeninin "name" özelliğine değer atadık
  student2.name = "Veli"; // "." ile student2 değişkeninin "name" özelliğine değer atadık
  student1.id = "19290200"; // "." ile student1 değişkeninin "id" özelliğine değer atadık
  student2.id = "19290299"; // "." ile student2 değişkeninin "id" özelliğine değer atadık
  student1.age = 18; // "." ile student1 değişkeninin "age" özelliğine değer atadık
  student2.age = 19; // "." ile student2 değişkeninin "age" özelliğine değer atadık
  
  printf("Name: %s Id: %s Age: %d\nName: %s Id: %s Age: %d\n", student1.name, student1.id, student1.age,
  student2.name, student2.id, student2.age);
  return 0;
}
