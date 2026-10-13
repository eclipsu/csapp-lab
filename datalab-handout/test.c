#include <stdio.h>

int main() {
  float inf_hex = 0x1.0p128f;
  printf("%f\n", inf_hex);
  printf("%d\n", (int)inf_hex);
}
