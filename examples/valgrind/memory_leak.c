// memory_leak.c, a program with a memory leak
// Check with:
// % gcc sample1.c -o sample1 
// % valgrind -v --leak-check=yes ./sample1

#include <stdlib.h>
#include <stdio.h>

void get_mem() {
  char *ptr;
  ptr = (char *) malloc (10);  /* memory not freed */
}

int main(void) {
  int i;
  char *ptr1, *ptr2;
  ptr1 = (char *) malloc (512);
  ptr2 = (char *) malloc (512);
  ptr2 = ptr1; /* causes the memory leak of ptr1 */
  free(ptr2);
  free(ptr1);
  for ( i = 0; i < 512; i++ ) {
    get_mem();
  }
}
