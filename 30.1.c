#include <stdio.h>
#define SIZE 10

int main() {
	int arr[SIZE];
	printf("Enter the elements of an array");

	for(int i = 0; i < SIZE; ++i){
	scanf("%d", &arr[i]);
	}


	int max=arr[0];
	for (int i = 1; i < SIZE; ++i){
		if (arr[i] > max){
		max = arr[i];
		}
	}
		printf("The maximum is %d\n", max);
	








}
