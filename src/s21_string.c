#include "s21_string.h"

int s21_strlen(char *data) {
    int n = -1;
    while(data[++n]);
    return (n);
}
