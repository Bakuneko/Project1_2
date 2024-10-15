#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <windows.h>
#include <time.h>

int main() {
    srand(time(NULL));
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    int size;
    printf("¬ведите размер массива: ");
    scanf("%d", &size);
    int* array = (int*)malloc(size * sizeof(int));
    if (array == NULL) {
        return 1;
    }

    for (int i = 0; i < size; i++) {
        array[i] = rand() % 100;
        printf("Ёлемент %d: %d\n", i + 1, array[i]);
    }
    return 0;
}