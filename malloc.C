#include <stdio.h>
#include<stdlib.h>
void main() {
    int*arr=(int*)malloc(5*sizeof(int));
    for(int i=0; i<5;i++){
    printf("Enter element%d:",i+1);
    scanf("%d", & arr[i]);
}
    free (arr);
    printf("%d",arr);
}
