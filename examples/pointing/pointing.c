#include <stdio.h>

int a = 1;
char *b = '2';
float c = 1.9;

int main() {
    printf("int 'a': %i\n", a);
    printf("char 'b': %s\n", b);
    printf("float 'c': %s\n", c);
    printf("Pointed int 'a': %i\n", &a);
    printf("Pointed char 'b': %s\n", &b);
    printf("Pointed float 'c': %s\n", c);
    return(0);
}
