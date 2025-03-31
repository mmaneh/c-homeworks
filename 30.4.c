#include <stdio.h>
#define SIZE 10
int main() {

        int arr[SIZE];
        printf("Enter the elements of the array \n");

        for (int i = 0; i < SIZE; ++i){
                scanf("%d", &arr[i]);
        }

        int min = arr[0];
	int min_index = 0;
        for (int i = 0; i < SIZE; ++i){
                if (arr[i] < min){
                min = arr[i];
		min_index = i;
                }
        }
        printf("The index of minimum is %d", min_index);

}
