#include <stdio.h>
#define SIZE 10
int main() {

	int arr[SIZE];
	printf("Enter the elements of the array \n");

	for (int i = 0; i < SIZE; ++i){
		scanf("%d", &arr[i]);	
	}

	int min = arr[0];

	for (int i = 0; i < SIZE; ++i){
                if (arr[i] < min){
		min = arr[i];
		}
        }
	printf("The minimum is %d", min);

}
