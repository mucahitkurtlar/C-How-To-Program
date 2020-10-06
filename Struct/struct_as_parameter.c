#include <stdio.h>

struct student{ //student isminde struct oluşturduk
  char *name; //bu scope içinde struct üyelerinin sahip olabileceği özllikleri oluşturduk
  char *id;
  int age;
};

void displayStudent(struct student);

int main() {
  struct student student1; //student1 isimli student tipinde değişken oluşturduk
  student1.name = "Ali"; // "." ile student1 değişkeninin "name" özelliğine değer atadık
  student1.id = "19290200"; // "." ile student1 değişkeninin "id" özelliğine değer atadık
  student1.age = 18; // "." ile student1 değişkeninin "age" özelliğine değer atadık
  displayStudent(student1);
  return 0;
}

void displayStudent(struct student s) { //Struct tanımları da tıkı diğer değişkenler gibi fonksiyon parametresi olarak pass edilebilir
    printf("Name: %s\nID: %s\nAge: %d\n", s.name, s.id, s.age);
}