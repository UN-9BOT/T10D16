#include <stdio.h>
#include <string.h>
#define NUM 5

int main(void) {
    char *d1[NUM] = {"Test1", "nums 3 3", "", "  what  ", "\n\n"};
    char d2[5] = "3333";

    for (int i = 0; i < NUM; i++) {
        printf("%d\n", strcmp(d1[i], d2[i]));
    }
    return (0);
}
