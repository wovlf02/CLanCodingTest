//
// Created by user on 25. 2. 3.
//

#include <stdio.h>

int main(){
  int a;
  int b[1000][2];
  int sum = 0;

  scanf("%d", &a);

  for(int i = 0; i < a; i++){
    scanf("%d %d", &b[i][0], &b[i][1]);
    sum += (b[i][1] % b[i][0]);
  }
  printf("%d", sum);
}