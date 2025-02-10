//
// Created by user on 25. 2. 3.
//

#include <stdio.h>

int main() {
  int a, up = 0, down = 0;
  scanf("%d",&a);
  int arr[a];
  for(int i=0;i<a;i++){
    scanf("%d",&arr[i]);
  }
  for(int i=1;i<a;i++){
    if(arr[i] < arr[i-1]){
      down++;
    }else if(arr[i] > arr[i-1]){
      up++;
    }
  }
  printf("%d %d",up, down);
  return 0;
}