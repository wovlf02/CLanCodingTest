//
// Created by user on 25. 2. 3.
//

#include <stdio.h>

int main() {
  int a, b, c;
  scanf("%d %d %d", &a, &b, &c);
  printf("%d", (a > b ? b : a) < c ? (a > b ? b : a) : c);
  return 0;
}