#include <stdio.h>

int main(){
    int a, b, sum = 0;
    scanf("%d %d", &a, &b);
    for(int i = a; i < b + 1; i++){
        if(i % 2 == 0){
            sum -= i;
        } else if(i % 2 == 1){
            sum += i;
        }
    }
    printf("%d", sum);
    return 0;
}