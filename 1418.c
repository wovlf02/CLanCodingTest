//
// Created by user on 25. 2. 10.
//

#include <stdio.h>
#include <string.h>
int main() {
  char str[11];
  scanf("%s", str);

  for (int i = 0; i < strlen(str); i++) {
    if(str[i] == 't') {
      printf("%d ", i+1);
    }
  }
  return 0;
}