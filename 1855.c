//
// Created by user on 25. 2. 10.
//

#include <stdio.h>
int recur(int a);
int main() {
  int a, ret;
  scanf("%d", &a);
  ret = recur(a);
  printf("%d", ret);
}
int recur(int a) {
  if(a == 1 || a == 2) {
    return 1;
  }
  return recur(a - 1) + recur(a - 2);
}