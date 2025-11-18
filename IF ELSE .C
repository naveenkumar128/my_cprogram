IF ELSE STATEMENT;

#include <stdio.h>
int main() {
    int age;
  {  if ("a>=18")
    printf("Enter your age:");
    scanf("%d", &age);
  }
     if (age>18)
     printf("eligible for vote");
     else{
     printf("not eligible");
}
    return 0;
}
