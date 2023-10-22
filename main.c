
#include <stdio.h>
#include <stdbool.h>

typedef struct {
    int x;
    float y;
    char z;
} mystr;

typedef union {
    int x;
    float y;
    char z;
} myunion;

int main(){

    printf("struct size : %lu\n", sizeof(mystr));
    printf("union size :%lu\n", sizeof(myunion));
}