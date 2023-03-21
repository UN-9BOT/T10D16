#include "s21_string.h"

int s21_strlen(char *data) {
    int n = -1;
    while(data[++n]);
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
