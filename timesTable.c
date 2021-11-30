/* Zach Zweibach

This program will ask the user for two numbers. Then print multiples of the first number up until the second number.
*/

#include <stdio.h>

int main(){
	
	int num=-1;
	
	printf("What tables are you learning today?\n");
	scanf("%d",&num);
	
	if(num>0)
		{
		int numL;
		
		printf("Up to what number do you have to learn?\n");
		scanf("%d",&numL);
		
		if(numL>0)
			{
			int temp=1;
			
			while(temp<=numL)
			{
			printf("%d times %d = %d\n",num,temp,num*temp);
			temp++;
			}
			}
		else
			printf("You did not enter valid number.");
		}
	else if(num==0)
		printf("The answer is always 0.");
	else
		printf("You did not enter a valid number.");
	
	return 0;
}
