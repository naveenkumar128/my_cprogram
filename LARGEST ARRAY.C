#include <stdio.h>
int main() {
    int arr[7]={1,2,3,4,5,6,7};
    int max = arr[0];
    for(int i = 0; i < 7; i++) {
      if (arr[i]>max){
      arr[i]=max  ;
    }
    }
    printf("Largest element in array = %d\n", max);
}
