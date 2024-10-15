#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>
int main() {
    int rows, cols;
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    printf("������� ���������� �����: ");
    scanf("%d", &rows);
    printf("������� ���������� ��������: ");
    scanf("%d", &cols);
    int** array = (int**)malloc(rows * sizeof(int*));
    for (int i = 0; i < rows; i++) {
        array[i] = (int*)malloc(cols * sizeof(int));
    }
    printf("������� �������� �������:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("������� [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &array[i][j]);
        }
    }
    for (int j = 0; j < cols; j++) {
        int sum = 0;
        for (int i = 0; i < rows; i++) {
            sum += array[i][j];
        }
        printf("����� ��������� � ������� %d: %d\n", j + 1, sum);
    }
    for (int i = 0; i < rows; i++) {
        free(array[i]);
    }
    free(array);
    return 0;
}