#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>

int main() {
    int size;
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    printf("Введите размер массива: ");
    scanf("%d", &size);

    if (size <= 0) {
        printf("Размер массива должен быть больше нуля.\n");
        return 1;
    }

    int* array = (int*)malloc(size * sizeof(int));
    if (array == NULL) {
        printf("Ошибка выделения памяти.\n");
        return 1;
    }

    printf("Размер массива: %d элементов\n", size);

    free(array);

    return 0;
}