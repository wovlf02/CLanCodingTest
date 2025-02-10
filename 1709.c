#include <stdio.h>

int main() {
  int a;
  scanf("%d", &a);
  int ary[a];

  for (int i = 0; i < a; i++) {
    scanf("%d", &ary[i]);
  }
  for (int i = 0; i < a - 1; i++) {
    for(int j = i + 1; j < a; j++) {
      if(ary[i] < ary[j]) {
        int temp = ary[i];
        ary[i] = ary[j];
        ary[j] = temp;
      }
    }
  }
  for (int i = 0; i < a; i++) {
    printf("%d ", ary[i]);
  }
}