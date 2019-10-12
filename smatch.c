#include<stdio.h>
#include<string.h>
int strcheck(char *a,char *p,int phash,int *hash,int alen,int plen);
int hashvalue(char* a,int sindex,int len){
	int sum=0;
	for(int i=sindex;i<sindex+len;i++){
		sum=sum+(a[i]-'a'+1);
	}
	return sum%13;
}
int main(){
	char a[]="lucknow is the capital of uttarpradesh";
	char p[]="cap";
	int alen=strlen(a);
	int plen=strlen(p);
	int hash[alen+plen+1];
	for(int i=0;i<alen+plen;i++){
		hash[i]=0;
	}
	for(int i=0;i<alen+plen;i++){
		hash[i]=hashvalue(a,i,plen);
	}
	for(int i=0;i<alen+plen;i++)
		printf("%d\t",hash[i]);
	int phash=hashvalue(p,0,plen);
	printf("\n%d\t",phash);
	int f=strcheck(a,p,phash,hash,alen,plen);
	if(f==1)
		printf("pattern found\n");
	else 
		printf("not found\n");
	return 0;
}
int strcheck(char *a,char* p,int phash,int *hash,int alen,int plen){
	for(int i=0;i<alen-plen+1;i++){
		if(hash[i]==phash){
			int k=0;
			for(int j=i;j<i+plen;j++){
				if(p[k]!=a[j])
					break;
			k++;
			}
		if(k==plen)return 1;
		}
	}
	return 0;
}
