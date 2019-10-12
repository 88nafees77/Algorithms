#include<stdio.h>
int rev(int x){
	int i=0;
	while(x!=0){
		r=x%10;
		i=i*10+r;
		x=x/10;
	}
	return i;
}
int main(){
	int x=123;
	int rs=rev(x);
	printf("%d",rs);
}
