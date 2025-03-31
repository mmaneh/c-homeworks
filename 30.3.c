#include <stdio.h>
#define SIZE 5

int main() {
        int arr[SIZE];
        printf("Enter the elements of an array \n");

        for(int i = 0; i < SIZE; ++i){
        scanf("%d", &arr[i]);
        }


        int max = arr[0];
	int max_index = 0;
        for (int i = 1; i < SIZE; ++i){
                if (arr[i] > max){
                max = arr[i];
		max_index = i;
                }

	}	
		printf("The index of max is %d\n", max_index);

        
}
                



