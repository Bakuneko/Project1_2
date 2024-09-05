#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <windows.h>
int difference_max_min(int arr[], int size) {
    if (size == 0) {
        return 0;
    }

    int max_element = arr[0];
    int min_element = arr[0];

    for (int i = 1; i < size; i++) {
        if (arr[i] > max_element) {
            max_element = arr[i];
        }
        if (arr[i] < min_element) {
            min_element = arr[i];
        }
    }

    return max_element - min_element;
}
int main() {
    int array[] = { 10, 3, 5, 20, 8 };
    int size = sizeof(array) / sizeof(array[0]);
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    int result = difference_max_min(array, size);
    printf("Разница %d\n", result);

    return 0;
}