/* Zach Zweibach

This program will print a neat pattern based on user input.
Unlike some of the others, it will repeat user prompts when invalid input is offered. */
#include <stdio.h>

int main() {

	int width=1;
	int failed=0;

	while((width%6!=0)||(width==0))
	{if(failed>0)
	printf("Please enter a width which is a multiple of 6\n");

	else
	printf("What is the width of your fabric?\n");

	scanf("%d",&width);
	failed++;}

	failed=0;
	int height=1;

	while((height%2!=1)||(height<7)||(height==0))
	{if(failed>0)
	printf("Please enter an odd height which is at least 7\n");

	else
	printf("What is the height of your fabric?\n");

	scanf("%d",&height);
	failed++;}

	int line=1;
	int starcount=0;

	while(line<=2)
	{while(starcount<width)
	{printf("*");
	starcount++;}

	printf("\n");
	starcount=0;
	line++;}

	int sections=width/3;
	int done=0;

	while(line<height-1)
	{if(line%2==1)
		{while(done<sections)
			{if(done%2==0)
				{printf("***");
				done++;}
			else
				{printf("   ");
				done++;}}}
	else
		{while(done<sections)
			{if(done%2==1)
				{printf("***");
				done++;}
			else
				{printf("   ");
				done++;}}}
	done=0;
	printf("\n");
	line++;}

	while(line<=height)
	{while(starcount<width)
	{printf("*");
	starcount++;}

	if(line!=height)
	printf("\n");

	starcount=0;
	line++;}

	return 0;
}
