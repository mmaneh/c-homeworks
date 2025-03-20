#include <stdio.h>
int main (){
	int a=0, b=0;
	printf("Enter a and b: \n");
	scanf("%d %d", &a, &b);

	for(int i = a; i<=b; i++){
		if(i%5==0){
		printf("%d\n", i);
		}
	}
return 0;
}
