/* 
 * hello.c
 * An example with a makefile + helper functions
 */
 
#include <stdio.h>
#include <hello.h>

/* --- Main --- */
int main() {
  char buf[] = "12345678";
  int chksum_true = 164; // what it should be
  int chksum_test = checksum(buf, CHECKSUM); // check what it is
  printf("test: %d, true: %d", chksum_test, chksum_true);
  if (chksum_test == chksum_true) {
    return(0);
  }
  else {
    return(255);
  }
}
