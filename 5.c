#include <stdio.h>
int main () {
	int a =0;
	printf("Input a: ");
	scanf("%d", &a);
	int p=1;
	
for (int i=1; i<=a; i++){
        p = p * i;
}
	printf("The factorial of a is: %d", p);

return 0;



}
