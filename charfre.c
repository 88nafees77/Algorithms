#include<stdio.h>
#include<string.h>
char freq(char *a,int len){
	int i,j;
	int smax;
	int hash[26]={0};
	for(i=0;i<len;i++){
		hash[a[i]-'a']++;
	}
	int max=hash[0];
	for(i=0;i<26;i++){
		if(max<hash[i]){
			smax=max;
			max=i;
		}else if(hash[i]>smax && hash[i]!=max){
			smax=i;
		}
	}
	return max;
}
int main(){
	char a[50];
	printf("Enter strings\n");
	scanf("%[^\n]s",a);
	int len=strlen(a);
	int y=freq(a,len);
	printf("%c\n",y+'a');
	return 0;
}	

