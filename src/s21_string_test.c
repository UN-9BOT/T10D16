#include "s21_string.h"
#define NUM 5
void s21_strlen_test();
void s21_strcmp_test();
void s21_strcpy_test();
void s21_strcat_test();

int main(void) {
#ifdef STRLEN
    s21_strlen_test();
#endif
#ifdef STRCMP
    s21_strcmp_test();
#endif
#ifdef STRCPY
    s21_strcpy_test();
#endif
#ifdef STRCAT
    s21_strcat_test();
#endif

    return (0);
}

void s21_strlen_test() {
    char *data[NUM] = {"\nt\n%$", "nums 3 3", "", "  what  ", "\n\n"};
    int lenData[NUM] = {5, 8, 0, 8, 2};

    for (int i = 0; i < NUM; i++) {
        if (s21_strlen(data[i]) == lenData[i]) {
            printf("%s\n%i\nSUCCESS\n\n", data[i], lenData[i]);
        } else {
            printf("%s\n%i\nFAIL\n\n", data[i], lenData[i]);
        }
    }
}

void s21_strcmp_test() {
    char *d1[NUM] = {"Test1", "nums 3 3", "", "  what  ", "\n\n"};
    char *d2[NUM] = {"Test1", "nuMs 4 3", " ", " hat", "\n"};
    int res[NUM] = {0, 32, -32, -72, 10};

    for (int i = 0; i < NUM; i++) {
        if (s21_strcmp(d1[i], d2[i]) == res[i]) {
            printf("%s\n%s\n%i\nSUCCESS\n\n", d1[i], d2[i], res[i]);
        } else {
            printf("%s\n%s\n%i\nFAIL\n\n", d1[i], d2[i], res[i]);
        }
    }
}

void s21_strcpy_test() {
    char *d1[NUM] = {"Test1", "nums 3 3", "", "  what  ", "\n\n"};
    char d3[10];
    int flag = 0;
    for (int i = 0; i < NUM; i++) {
        s21_strcpy(d1[i], d3);
        for (int j = 0; d1[i][j]; j++) {
            if (d1[i][j] != d3[j]) {
                flag = 1;
            }
        }
        if (flag == 0) {
            printf("%s\n%s\nSUCCESS\n\n", d1[i], d3);
        } else {
            printf("%s\n%s\nFAIL\n\n", d1[i], d3);
        }
    }
}

void s21_strcat_test() {
    char d1[NUM][20] = {"Test1", "nums 3 3", "", "  what  ", "\n\n"};
    char *d2[NUM] = {"Test1", "nums 3 3", "", "  what  ", "\n\n"};
    char *d3[NUM] = {"Test1Test1", "nums 3 3nums 3 3", "", "  what    what  ", "\n\n\n\n"};

    int flag = 0;
    for (int i = 0; i < NUM; i++) {
        s21_strcat(d1[i], d2[i]);
        for (int j = 0; d3[i][j]; j++) {
            if (d1[i][j] != d3[i][j]) {
                flag = 1;
            }
        }
        if (flag == 0) {
            printf("%s\n%s\nSUCCESS\n\n", d1[i], d3[i]);
        } else {
            printf("%s\n%s\nFAIL\n\n", d1[i], d3[i]);
        }
    }
}
