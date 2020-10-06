/*
işleyiş açıklaması için:
https://www.youtube.com/watch?v=OGzPmgsI-pQ
*/


#include <stdio.h>

void sort(int arr[], int size);

int main(){
  int arr[10];
  for(int i = 0; i < 10; i++)
    scanf("%d", &arr[i]);
  sort(arr, 10);
  for(int i = 0; i < 10; i++)
    printf("%d\n", arr[i]);
  return 0;
}
void sort(int arr[], int size){
  int j, key;
  for (int i = 1; i < size; i++) {
    key = arr[i];
    j = i - 1;
    while (j >= 0 && arr[j] > key) {
      arr[j + 1] = arr[j];
      j = j - 1;
    }
    arr[j + 1] = key;
  }
}
