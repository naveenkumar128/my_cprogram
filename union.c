#include<stdio.h>
int main(){
    union data;
    int i=8;
    float marks=85.5;
    printf("%d\n",i);
    printf("%f\n",marks);
    scanf("%d",& i,& marks);
}
