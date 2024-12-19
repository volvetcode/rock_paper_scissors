#include <stdio.h>
#include <stdlib.h>

#include "str.h"

unsigned long s21_strlen(const char *str) {
    unsigned long length = 0;
    if (str == NULL) {
        return 0;
    }
    for (; *(str + length); length++);
    return length;
}


char *s21_strcpy(char *destination, const char *source) {
    destination = (char *)malloc((s21_strlen(source) + 1) * sizeof(char));
    char *p = destination;
    while (*source != 0) {
        *(destination++) = *(source++);
    }
    *destination = '\0';
    return p;
}