#include<stdio.h>
#include<string.h>
void sort(char *a,int len){
	int i,x;
	int hash[26]={0};
	for(i=0;i<len;i++)
		hash[a[i]-'a'];
	for(int j=0;j<hash;j++){
		x=a[j];
		for(i=1\;i<=x;i++){
			printf("%c\t",i+'a');
		}
	}
	return;
}
int main(){
	char a[40];
	printf("enter the string\n");
	scanf("%s",a);
	int len=sizeof(a)/sizeof(char);
	sort(a,len);
	return 0;
	
}
