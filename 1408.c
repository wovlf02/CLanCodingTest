//
// Created by user on 25. 2. 10.
//


#include <stdio.h>
#include <string.h>
int main() {
  char str[21];
  scanf("%s", str);
  for (int i = 0; i < strlen(str); i++) {
    printf("%c", str[i] + 2);
  }
  printf("\n");
  for (int i = 0; i < strlen(str); i++) {
    printf("%c", (str[i] * 7) % 80 + 48);
  }

}