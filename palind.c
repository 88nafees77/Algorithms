#include<stdio.h>
#include<string.h>
void palindrome(char *a,int len){
	int l=0,r=len-1;
	while(r>l){
		if(a[l++]!=a[r--]){
			printf("NOt palindrome\n");
			return 0;
		}
	}
	printf("yes palindrome\n");

}
int main(){
	char a[50];
	printf("Enter string\n");
	scanf("%s",a);
	int len=strlen(a);
	palindrome(a,len);
}
