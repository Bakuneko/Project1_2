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

    // ���� ������ ���������
    for (i = 0; i < 3; i++) {
        printf("������� ������� ��������:\n");
        scanf("%19s", stud[i].famil);
    }

    for (i = 0; i < 3; i++) {
        printf("������� ��� �������� %s:\n", stud[i].famil);
        scanf("%19s", stud[i].name);
    }

    for (i = 0; i < 3; i++) {
        printf("������� �������� ���������� �������� %s %s:\n", stud[i].famil, stud[i].name);
        scanf("%19s", stud[i].facult);
    }

    for (i = 0; i < 3; i++) {
        printf("������� ����� �������� ������ �������� %s %s:\n", stud[i].famil, stud[i].name);
        scanf("%d", &stud[i].Nomzach);
    }

    // ����� ������ ���������
    for (i = 0; i < 3; i++) {
        printf("������� %s %s ��������� �� ���������� %s, ����� �������� ������ %d\n",
            stud[i].famil, stud[i].name, stud[i].facult, stud[i].Nomzach);
    }

    // ����� �� �������� ����������
    char searchFamil[20], searchName[20], searchFacult[20];
    int searchNomzach;
    int found = 0;

    printf("\n������� ������� ��� ������:\n");
    scanf("%19s", searchFamil);
    printf("������� ��� ��� ������:\n");
    scanf("%19s", searchName);
    printf("������� �������� ���������� ��� ������:\n");
    scanf("%19s", searchFacult);
    printf("������� ����� �������� ������ ��� ������:\n");
    scanf("%d", &searchNomzach);

    // ����� ����� ���������
    for (i = 0; i < 3; i++) {
        if (strcmp(stud[i].famil, searchFamil) == 0 &&
            strcmp(stud[i].name, searchName) == 0 &&
            strcmp(stud[i].facult, searchFacult) == 0 &&
            stud[i].Nomzach == searchNomzach) {
            printf("\n������ �������: %s %s, ���������: %s, ����� �������� ������: %d\n",
                stud[i].famil, stud[i].name, stud[i].facult, stud[i].Nomzach);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("\n������� � ������ ������� �� ������.\n");
    }

    return 0;
}
