#include <stdio.h>

int main(){
    int n, num, find = 0;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++){
      scanf("%d", &arr[i]);
    }
    scanf("%d", &num);
    for(int i = 0; i < n; i++){
      if(arr[i] == num) {
        find = 1;
        printf("%d", i + 1);
        break;
      }
    }
    if(find == 0){
      printf("-1");
    }
}