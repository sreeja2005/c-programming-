#include <stdio.h>

void copy_array(int *src, int *dest, int size);

int main() {
  int array1[10] = {10, -1, 100, 90, 87, 0, 15, 10, 20, 30};
  int array2[10];

  copy_array(array1, array2, 10);

  printf("Array1: ");
  for (int i = 0; i < 10; i++) {
    printf("%d ", array1[i]);
  }

  printf("\nArray2: ");
  for (int i = 0; i < 10; i++) {
    printf("%d ", array2[i]);
  }

  return 0;
}

void copy_array(int *src, int *dest, int size) {
  for (int i = 0; i < size; i++) {
    *(dest + i) = *(src + i);
  }
}

