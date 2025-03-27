#include <stdio.h>
int main() {
int num1=0;
int num2=0;
printf("Enter num1 and num2: ");
scanf("%d %d", &num1, &num2);
int n=0;
printf("enter n: ");
scanf("%d", &n);
int res=0;
if(n==1){
res=num1&num2;
printf("%d", res);
}
if(n==2){
res=num1|num2;
printf("%d", res);
}
if(n==3){
res=num1^num2;
printf("%d", res);
}
if(n==4){
res=~num1;
int res1=~num2;
printf("%d %d", res, res1);
    }



    }
