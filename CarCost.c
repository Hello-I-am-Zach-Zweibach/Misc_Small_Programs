/* Zach Zweibach

This program will:
Prompt the user for: the cost of the car, the amount of money for a deposit, and the number of months of financing.
Then it will estimate their monthly payment for a car. */

#include <stdio.h>

int main(){
	
	int c,d,m,f;
	
	printf("Please enter the cost of the car you wish to purchase.\n");
	scanf("%d",&c);
	
	printf("Now enter how much you're paying for an initial deposit.\n");
	scanf("%d",&d);
	
	printf("How many months do you want to pay the car off over?\n");
	scanf("%d",&m);
	
	f=(c-d)/m;
	printf("Your monthly payment, for a car costing $%d with an initial deposit of $%d, will cost $%d per month for %d months.",c,d,f,m);
	
	return 0;
}
