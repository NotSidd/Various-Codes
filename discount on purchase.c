#include<stdio.h>
int main(void)
{
	int qty,dis;
	float total,rate;
	printf("enter the quantity");
	scanf("%d",&qty);
	if(qty>1000)
	{
		dis=10;
		printf("enter the rate of item: ");
		scanf("%f",&rate);
		total=(qty*rate)-(qty*rate*dis/100);
	    printf("\nthe total cost with discount is %f ",total);
	}else{
		dis=0;
		printf("enter the rate of item: ");
		scanf("%f",&rate);
		total=(qty*rate)-(qty*rate*dis/100);
	    printf("\nthe total cost without discount is %f ",total);
	}
	
}