#include<stdio.h>
int memo[4][4]={0};
int a[4][4]={{0,20,50,90},{-1,0,30,80},{-1,-1,0,25},{-1,-1,-1,0}};
int mincost(int s,int d){
	if(s==d || s==d-1)
		return a[s][d];
	if(memo[s][d]==0){
		int min=a[s][d];
	for(int i=s+1;i<d;i++){
		int temp=mincost(s,i)+mincost(i,d);
		if(temp<min){
			min=temp;
		}
	  }
	memo[s][d]=min;
	}	
	return memo[s][d];
}
int main(){
	printf("Enter source and destination\n");
	int s,d;
	scanf("%d%d",&s,&d);
	int cost=mincost(s,d);
	printf("min cost is:%d\n",cost);
	return 0;
}
