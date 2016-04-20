/*
 * Tools
 */
#include <stdio.h>

int checksum(char* buf, int res) {
  int sum = 0;
  for (int i = 0; i < 8; i++) {
    sum += buf[i];
  }
  return sum % res;
}
