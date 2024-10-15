#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>

int main() {
    int size;
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

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

    printf("������ �������: %d ���������\n", size);

    free(array);

    return 0;
}