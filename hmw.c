#include <stdio.h>
int main () {
	int n=0;
	printf("Enter n: ");
	scanf("%d", &n);
 	int res=0;
	for(int i=1; i<n; i++){
		if(n%i==0){
		 res =res+i;
		
		}
	}
	if(res==n){
	printf("The number is perfect");
	}else{
	printf("The number is not perfect");
	
	}

	}
