//
// Created by user on 25. 2. 10.
//

#include <stdio.h>
#include <string.h>

int main(){
  char str[1050];
  scanf("%s",str);
  for (int i = 0; i < strlen(str); i++){
    if(str[i] >= 97 && str[i] <= 122) {
      str[i] -= 32;
    } else if(str[i] >= 65 && str[i] <= 90) {
      str[i] += 32;
    }
  }
  for (int i = 0; i < strlen(str); i++){
    printf("%c",str[i]);
  }
}