//
// Created by user on 25. 2. 3.
//

#include <stdio.h>

int main() {
  int a;
  scanf("%d",&a);

  for(int i = a; i>0; i--) {
    for(int j = 1; j<=i; j++) {
      printf("%d ", i);
    }
     printf("\n");
  }
}