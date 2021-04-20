#include <stdio.h>
#include <stdlib.h>

#define TYPE_MASK     0x00000001
#define CONST_TRUE    0x80000001
#define CONST_FALSE   0x00000001

extern long our_code_starts_here()    asm("our_code_starts_here");

long print(long val) {
  printf("Unknown value: %#010lx\n", val);
  return val;
}

int main(int argc, char** argv) {
  long result = our_code_starts_here();
  print(result);
  return 0;
}
