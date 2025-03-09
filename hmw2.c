#include <stdio.h> 
int main () {
//task 1 
	int a =0;
	printf("Input a: ");
	scanf("%d", &a);
	int b =0;
	printf("Input b: ");
	scanf("%d", &b);
	int tmp = a;
	    a = b;
	    b = tmp;
	printf("a = %d\n", a);
	printf("b = %d\n", b);



//task 2
	float day, week, month, year;
	printf("Enter days: ");
	scanf("%f", &day);
	week = day/7;
	month = day/30;
	year = day/365;
	printf("%f day = %f week\n", day, week);
	printf("%f day = %f month\n", day, month);
	printf("%f day = %f year\n", day, year);



//task 3
	float seconds, minutes, hours;
	printf("Enter the seconds: ");
	scanf("%f", &seconds);
	     minutes = seconds/60;
	     hours = seconds/3600;
	printf("%f seconds = %f minutes\n", seconds, minutes);
	printf("%f seconds = %f hours\n", seconds, hours );


	return 0;
}
