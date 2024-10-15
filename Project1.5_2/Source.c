#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>
struct student {
    char lastn[20];
    char name[20];
    char facult[20];
    char Numzach[10];
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
        scanf("%19s", stud[i].lastn);
    }

    for (i = 0; i < 3; i++) {
        printf("Введите имя студента %s:\n", stud[i].lastn);
        scanf("%19s", stud[i].name);
    }

    for (i = 0; i < 3; i++) {
        printf("Введите название факультета студента %s %s:\n", stud[i].lastn, stud[i].name);
        scanf("%19s", stud[i].facult);
    }

    for (i = 0; i < 3; i++) {
        printf("Введите номер зачётной книжки студента %s %s:\n", stud[i].lastn, stud[i].name);
        scanf("%19s", &stud[i].Numzach);
    }

    // Вывод данных студентов
    for (i = 0; i < 3; i++) {
        printf("Студент %s %s обучается на факультете %s, номер зачётной книжки %s\n",
            stud[i].lastn, stud[i].name, stud[i].facult, stud[i].Numzach);
    }

    // Поиск по заданным параметрам
    char searchLastn[20], searchName[20], searchFacult[20];
    int searchNumzach;
    int found = 0;

    printf("\nВведите фамилию для поиска:\n");
    scanf("%19s", searchLastn);
    printf("Введите имя для поиска:\n");
    scanf("%19s", searchName);
    printf("Введите название факультета для поиска:\n");
    scanf("%19s", searchFacult);
    printf("Введите номер зачётной книжки для поиска:\n");
    scanf("%19s", &searchNumzach); // сделать возможность ввода буквенных символов

    // Поиск среди студентов
    for (i = 0; i < 3; i++) {
        if (strcmp(stud[i].lastn, searchLastn) == 0 &&
            strcmp(stud[i].name, searchName) == 0 &&
            strcmp(stud[i].facult, searchFacult) == 0 &&
            strcmp(stud[i].Numzach, searchNumzach)) {
            printf("\nНайден студент: %s %s, факультет: %s, номер зачётной книжки: %s\n",
                stud[i].lastn, stud[i].name, stud[i].facult, stud[i].Numzach);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("\nСтудент с такими данными не найден.\n");
    }

    return 0;
}
