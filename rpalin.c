#include<stdio.h>
#include<string.h>
void ispalindrome(char* a,int len){
		 int l=0,r=len-1;
		while(r>l){
			if(a[l++]!=a[r--]){
				printf("not palindrome\n");
				return ;
			}
		}
			printf("yes palindrome\n");
		return;
}
void rotate(char *a,int len){
	int i,j;
	char temp;
	 for(i=1;i<len;i++){
                temp=a[0];
                for(j=1;j<len;j++){
                        a[j-1]=a[j];
                }
                a[len-1]=temp;
		ispalindrome(a,len);
	}
	return;

}
int main(){
	char a[50];
	printf("Enter string\n");
	scanf("%s",a);
	int len=strlen(a);
	ispalindrome(a,len);
	rotate(a,len);
	return 0;
}
