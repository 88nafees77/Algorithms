#include<stdio.h>
int gcd(int a,int b){
	if(a==0||b==0)
		return 0;
	if(a==b)return a;
	if(a>b)return gcd(a-b,b);
		return gcd(b-a,a);

}
int main(){
	int x=12,y=3;
	int rs=gcd(x,y);
	int lcm=(x*y)/rs;
	printf("%d",lcm);
}
