#include<stdio.h>
//int cost[4][4]={{0,20,50,90},{-1,0,30,80},{-1,-1,0,25},{-1,-1,-1,0}};
int minCost(int cost[4][4],int s,int d){
	if(s==d)return 0;
	int min=cost[s][d];
	int temp1,temp2;
	for(int i=s;i<d;i++){
		temp1=cost[s][s+1];
		temp2=cost[s][d];
		int x=temp1+temp2;
		if(min>x)
			min=x;
	}
	for(int i=s;i<d;i++){
		temp1=cost[s][s+2];
		temp2=cost[s+2][d];
		int y=temp1+temp2;
		if(min>y)
			min=y;

	}
	return min;
	
}
int main(){
	int cost[4][4]={{0,20,50,90},{-1,0,30,80},{-1,-1,0,25},{-1,-1,-1,0}};
	int s,d;
	printf("Enter source and des\n");
	scanf("%d%d",&s,&d);
	int minval=minCost(cost,s,d);
	printf("%d\n",minval);
	return 0;
}
