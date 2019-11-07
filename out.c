#include<stdio.h>
#include<ctype.h>
int main(){
	double x=10.00,y=5.00;
	printf("%f\n",x/y);
	char str='1';
	int s=isdigit(str);
	printf("%d\n",s);
}
