/* Zach Zweibach

The program will ask the user to input how many cents they have.
Then the program outputs the amount of dollars and cents they have.
*/
#include <stdio.h>

int main(){
	
	int c,d,dc;
	double notc,t;
	
	printf("Please enter the number of cents that you have.\n");
	scanf("%d",&c);
	
	notc=c;
	d=c/100;
	dc=c%100;
	t=notc/100;
	
	printf("You have $%0.2f - %d dollars and %d cents.",t,d,dc);
	
	return 0;
}
