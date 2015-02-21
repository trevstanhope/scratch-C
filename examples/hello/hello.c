/* 
 * hellomake
 * An example with a makefile.
 */
 
#include <hello.h>

/* --- Main --- */
int main() {
    int temp1 = 2;
    int temp2 = 3;
    some_function(temp1); // call a function in another file
    other_function(temp2);
    if (temp1 == 1) {
        return(0);
    }
    else {
        return(255);
    }
}
