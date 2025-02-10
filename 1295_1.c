//
// Created by user on 25. 2. 10.
//

#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
  char str[1001];
  scanf("%s", str);

  for(int i = 0; i < strlen(str); i++) {
    if(isupper(str[i])) {
      str[i] = tolower(str[i]);
    } else if(islower(str[i])) {
      str[i] = toupper(str[i]);
    }
  }
  printf("%s", str);
}