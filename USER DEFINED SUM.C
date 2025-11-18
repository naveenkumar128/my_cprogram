#include <stdio.h>
 int sum() {
     int a, b;
    printf("Enter two numbers: ");
     scanf("%d %d",&a,&b);
     printf("add = %d\n",a+b);
}
int main(){
    sum();
    return 0;
}
