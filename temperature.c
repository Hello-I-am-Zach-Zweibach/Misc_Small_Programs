/* Zach Zweibach

The program will get an input number and convert it to celsius. Then output it.
*/

#include <stdio.h>

int main(){
	
	double c,f;
	
	printf("Enter the temperature in degrees Celsius.\n");
	scanf("%lf",&c);
	
	f=c*9/5+32;
	
	printf("%0.2lf degrees Celsius is %0.2lf degrees Fahrenheit.",c,f);
	
	return 0;
}
