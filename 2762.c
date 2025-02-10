//
// Created by user on 25. 2. 10.
//

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
  char str[101];
  scanf("%s", str);
  for (int i = 0; i < strlen(str); i++) {
    if(isupper(str[i])) {
      printf("%c", str[i]);
    }
  }
  return 0;
}