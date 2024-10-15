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

    // ���� ������ ���������
    for (i = 0; i < 3; i++) {
        printf("������� ������� ��������:\n");
        scanf("%19s", stud[i].lastn);
    }

    for (i = 0; i < 3; i++) {
        printf("������� ��� �������� %s:\n", stud[i].lastn);
        scanf("%19s", stud[i].name);
    }

    for (i = 0; i < 3; i++) {
        printf("������� �������� ���������� �������� %s %s:\n", stud[i].lastn, stud[i].name);
        scanf("%19s", stud[i].facult);
    }

    for (i = 0; i < 3; i++) {
        printf("������� ����� �������� ������ �������� %s %s:\n", stud[i].lastn, stud[i].name);
        scanf("%19s", &stud[i].Numzach);
    }

    // ����� ������ ���������
    for (i = 0; i < 3; i++) {
        printf("������� %s %s ��������� �� ���������� %s, ����� �������� ������ %s\n",
            stud[i].lastn, stud[i].name, stud[i].facult, stud[i].Numzach);
    }

    // ����� �� �������� ����������
    char searchLastn[20], searchName[20], searchFacult[20];
    int searchNumzach;
    int found = 0;

    printf("\n������� ������� ��� ������:\n");
    scanf("%19s", searchLastn);
    printf("������� ��� ��� ������:\n");
    scanf("%19s", searchName);
    printf("������� �������� ���������� ��� ������:\n");
    scanf("%19s", searchFacult);
    printf("������� ����� �������� ������ ��� ������:\n");
    scanf("%19s", &searchNumzach); // ������� ����������� ����� ��������� ��������

    // ����� ����� ���������
    for (i = 0; i < 3; i++) {
        if (strcmp(stud[i].lastn, searchLastn) == 0 &&
            strcmp(stud[i].name, searchName) == 0 &&
            strcmp(stud[i].facult, searchFacult) == 0 &&
            strcmp(stud[i].Numzach, searchNumzach)) {
            printf("\n������ �������: %s %s, ���������: %s, ����� �������� ������: %s\n",
                stud[i].lastn, stud[i].name, stud[i].facult, stud[i].Numzach);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("\n������� � ������ ������� �� ������.\n");
    }

    return 0;
}
