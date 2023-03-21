#include "s21_string.h"

int s21_strlen(char *data) {
    int n = -1;
    while (data[++n])
        ;
    return (n);
}

int s21_strcmp(char *str1, char *str2) {
    const int len1 = s21_strlen(str1);
    const int len2 = s21_strlen(str2);
    const int size = (len1 > len2) ? len1 : len2;

    int res = 0;
    for (int i = 0; i < size && res == 0; i++) {
        res += str1[i] - str2[i];
    }
    return (res);
}

char *s21_strcpy(char *s1, char *s2) {
    for (int i = 0; s1[i] != '\0'; (s2[i] = s1[i]), i++) {
    };
    return (s2);
}

void s21_strcat(char *s1, char *s2) {
    int len1 = s21_strlen(s1);
    int len2 = s21_strlen(s2);
    for (int i = len1, j = 0; i < len2 + len1; i++, j++) {
        s1[i] = s2[j];
    }
}
