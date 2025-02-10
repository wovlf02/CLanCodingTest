//
// Created by user on 25. 2. 3.
//

#include <stdio.h>

int main(){
  int arr[10];
  int a;
  for(int i=0;i<10;i++){
    scanf("%d", &arr[i]);
  }
  scanf("%d",&a);
  printf("%d ", arr[a-1]);
}