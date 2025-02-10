//
// Created by user on 25. 2. 10.
//
void recur(int a);
#include <stdio.h>
int main() {
    int a;
    scanf("%d",&a);
    recur(a);
}
void recur(int a) {
    if(a==0) {
        return;
    }
    recur(a-1);
    printf("%d\n",a);
}