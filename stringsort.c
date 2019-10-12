#include<stdio.h>
#include<string.h>
int hash[26]={0};
void stringsort(char *a,int len){
	int i,x,j;
	for(i=0;i<len;i++){
		hash[a[i]-'a']++;
	}
	for(i=0;i<26;i++)
		printf("%d\t",hash[i]);
	for(j=0;j<26;j++){
		x=a[j];
		for(i=1;i<=x;i++){
			printf("%c\t",j+'a');
		}
	}
	return;
}
int main(){
	char a[40];
	printf("enter the string\n");
	scanf("%s",a);
	int len=sizeof(a)/sizeof(char);
	stringsort(a,len);
	return 0;
	
}
