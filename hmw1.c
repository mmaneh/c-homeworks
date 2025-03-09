#include <stdio.h>
int main(){
//task 1
	char lowercase;
	printf("Enter a lowercase letter: ");
	do{
	scanf("%c", &lowercase);
	}while(lowercase< 'a' || lowercase >'z');
	char uppercase = lowercase - 32;
	printf("The uppercase is %c\n: ", uppercase);

//task 2
	char upper;
	printf("Enter an uppercase letter: ");
	do{
		scanf("%c", &upper);
	} while (upper< 'A' || upper > 'Z');
	char lower = upper + 32;
	printf("The lowercase is %c\n: ", lower);

//task 3
	int x =0, y =0;
	printf("Enter your x and y: \n");
	scanf("%d %d", &x, &y);
	int sum = x + y;
	printf("The sum is %d: ", sum);


//task 4
	double  length = 0, width =0;
	printf("Enter the length and the width\n");
	scanf("%lf %lf", &length, &width);
	double  area = length * width;
	printf("The area is %.2lf: ", area);


//task 5
	float C =0;
	printf("Enter the tempreture in Celsius: \n");
	scanf("%f", &C);
	float F = (C* 9/5) + 32;
	printf("The tempreture in farenheit is %2.f: ", F);


	return 0;


}
