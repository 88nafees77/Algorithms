#include<stdio.h>
int cost[4][4]={{0,20,50,90},{-1,0,30,80},{-1,-1,0,25},{-1,-1,-1,0}};
int calculatemincost(int s,int d){
	if(s==d || s==d-1)return cost[s][d];
	int mincost=cost[s][d];
	for(int i=s+1;i<d;i++){
	int temp=calculatemincost(s,i)+calculatemincost(i,d);
	if(temp<mincost){
		mincost=temp;
	}
   }
	return mincost;
}
int main(){
	int s,d;
	printf("Enter source and des\n");
	scanf("%d%d",&s,&d);
	int min=calculatemincost(s,d);
	printf("%d\n",min);
	return 0;
}

