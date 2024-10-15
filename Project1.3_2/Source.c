#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>
#include <time.h>

int main() {
    int size;
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    srand(time(NULL));

    printf("������� ������ �������: ");
    scanf("%d", &size);

    if (size <= 0) {
        printf("������ ������� ������ ���� ������ ����.\n");
        return 1;
    }

    int* array = (int*)malloc(size * sizeof(int));
    if (array == NULL) {
        printf("������ ��������� ������.\n");
        return 1;
    }


    for (int i = 0; i < size; i++) {
        array[i] = rand() % 102 - 1;
    }


    printf("������ ��������� �����: \n");
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");


    free(array);

    return 0;
}