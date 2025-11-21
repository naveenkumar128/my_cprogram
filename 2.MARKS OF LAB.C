#include<stdio.h>
int main(){
    int marks;
    printf("enter the marks of student:");
    scanf("%d",&marks);
    if (marks>=90){
    printf("%d:A grade\n");
   } else if (marks>=75) {
    printf("%d:B grade\n");
   } else if (marks>=60){
       printf("%d:C grade\n");
   } else if (marks>=50){
       printf("%d:D grade\n");
   } else (marks<50);{
       printf("%d:F fail\n");
   }
}
