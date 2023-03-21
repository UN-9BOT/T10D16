#include "s21_string.h"
#define NUM 5

void s21_strlen_test();

int main(void) {
    #ifdef STRLEN
    s21_strlen_test();
    #endif


    return (0);
}

void s21_strlen_test() {
    char *data[NUM] = {"Test1", "nums 3 3", "", "  what  ", "\n\n"};
    int  lenData[NUM] = {5, 8, 0, 8, 2};
    
    for (int i = 0; i < NUM; i++) {
        if(s21_strlen(data[i]) == lenData[i]) {
            printf("%s\n%i\nSUCCESS\n\n", data[i], lenData[i]);
        } else { 
            printf("%s\n%i\nFAIL\n\n", data[i], lenData[i]);
        }
    }
}

void s21_strcmp_test() {



