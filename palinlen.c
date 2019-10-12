#include<stdio.h>
#include<string.h>
int count;
int findlen(char *a,int len){
	int l,r;
	l=(len/2);
	r=l+1;
	while(l>=0&&r<len-1){
		if(a[l--]==a[r++]){
			count++;
		}
	}
	return count;
}
int main(){
	char a[50];
	printf("enter string\n");
	scanf("%s",a);
	int len=strlen(a);
	int rs=findlen(a,len);
	printf("%d\n",rs);
	return 0;
}
