//
// Created by user on 25. 2. 3.
//

#include <stdio.h>

int main() {
    int a;
    scanf("%d",&a);
    for(int i = 1; i < a + 1; i++) {
        for(int j = 1; j < i + 1; j++) {
            printf("*");
        }
        printf("\n");
    }
}