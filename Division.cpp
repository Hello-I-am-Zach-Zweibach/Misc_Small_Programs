/* Zach Zweibach

This program will show some division. */

#include <stdio.h>

int main(){

	int a=20,b=5,c=32;
	int div1, div2, mod1,mod2,mod3;
	float d,n1=41,n2=8;
	
	div1=a/b;
	div2=b/c;
	d=b/a;
	
	printf("%d divided by %d = %d\n",a,b,div1);
	printf("%d divided by %d = %d\n",b,c,div2);
	printf("%d divided by %d = %0.0f\n",b,a,d);
	d=n1/n2;
	printf("%0.0f divided by %0.0f = %0.3f\n",n1,n2,d);
	
	return 0;
}
