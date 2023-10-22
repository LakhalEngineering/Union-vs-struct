
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
    mystr s;
    s.x = 45;
    s.y = 1.5;
    s.z = 'J';

    myunion u;
    u.x = 45;
    u.y = 6.45;
    u.z = 'K';

    printf("struct size : %lu\n", sizeof(mystr));
    printf("{%d, %f, %c}\n", s.x, s.y, s.z);
    printf("union size :%lu\n", sizeof(myunion));
    printf("{%d, %f, %c}\n", u.x, u.y, u.z);
}