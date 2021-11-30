/* Zach Zweibach

This program will prompt the user to make a choice between 1 and 3. Then output text based on that.
*/

#include <stdio.h>
	
int main(){
	
	int choice;
	
	printf("Please select a drink by choosing a number 1-3 \n");
	
	scanf("%d",&choice);
	
	switch(choice){
		case 1:printf("You selected a Coke \n");
		break;
		
		case 2:printf("You selected a Sprite \n");
		break;
		
		case 3:printf("You selected a Diet Coke \n");
		break;
		
		default:printf("Please make a choice from 1-3 \n");
		}
	
	printf("Thank you, please come again\n");
	
	return 0;}
