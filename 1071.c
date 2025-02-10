//
// Created by user on 25. 2. 3.
//

#include <stdio.h>

int main() {
  int a;
  for (;;) {
    scanf("%d",&a);
    if (a == 0) break;
    else printf("%d\n",a);
  }
}