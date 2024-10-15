#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>
struct student {
    char famil[20];
    char name[20];
    char facult[20];
    int Nomzach;
};

int main(void) {
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    setvbuf(stdin, NULL, _IONBF, 0);
    setvbuf(stdout, NULL, _IONBF, 0);

    struct student stud[3];
    int i;

    // Ввод данных студентов
    for (i = 0; i < 3; i++) {
        printf("Введите фамилию студента:\n");
        scanf("%19s", stud[i].famil);
    }

    for (i = 0; i < 3; i++) {
        printf("Введите имя студента %s:\n", stud[i].famil);
        scanf("%19s", stud[i].name);
    }

    for (i = 0; i < 3; i++) {
        printf("Введите название факультета студента %s %s:\n", stud[i].famil, stud[i].name);
        scanf("%19s", stud[i].facult);
    }

    for (i = 0; i < 3; i++) {
        printf("Введите номер зачётной книжки студента %s %s:\n", stud[i].famil, stud[i].name);
        scanf("%d", &stud[i].Nomzach);
    }

    // Вывод данных студентов
    for (i = 0; i < 3; i++) {
        printf("Студент %s %s обучается на факультете %s, номер зачётной книжки %d\n",
            stud[i].famil, stud[i].name, stud[i].facult, stud[i].Nomzach);
    }

    // Поиск по заданным параметрам
    char searchFamil[20], searchName[20], searchFacult[20];
    int searchNomzach;
    int found = 0;

    printf("\nВведите фамилию для поиска:\n");
    scanf("%19s", searchFamil);
    printf("Введите имя для поиска:\n");
    scanf("%19s", searchName);
    printf("Введите название факультета для поиска:\n");
    scanf("%19s", searchFacult);
    printf("Введите номер зачётной книжки для поиска:\n");
    scanf("%d", &searchNomzach);

    // Поиск среди студентов
    for (i = 0; i < 3; i++) {
        if (strcmp(stud[i].famil, searchFamil) == 0 &&
            strcmp(stud[i].name, searchName) == 0 &&
            strcmp(stud[i].facult, searchFacult) == 0 &&
            stud[i].Nomzach == searchNomzach) {
            printf("\nНайден студент: %s %s, факультет: %s, номер зачётной книжки: %d\n",
                stud[i].famil, stud[i].name, stud[i].facult, stud[i].Nomzach);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("\nСтудент с такими данными не найден.\n");
    }

    return 0;
}
