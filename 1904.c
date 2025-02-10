//
// Created by user on 25. 2. 10.
//


#include <stdio.h>
void recur(int a);
int b;
int main() {
  int a;
  scanf("%d %d", &a, &b);
  recur(a);
}
void recur(int a) {
  if(a > b) {
    return;
  }
  if(a % 2 == 1) {
    printf("%d ", a);
    recur(a+1);
  } else {
    recur(a+1);
  }
}