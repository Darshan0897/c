#include<stdio.h>
#include<conio.h>
void main()
{
	int no[5] , price[5] , qty[5] ,total , billamount , i ;
	float gst;
	clrscr();
	for(i=0;i<5;i++)
	{
		printf("\t enter no[%d] :",i);
		scanf("%d",&no[i]);
		printf("\t enter price[%d] :",i);
		scanf("%d",&price[i]);
		printf("\t enter qty[%d] :",i);
		scanf("%d",&qty[i]);
	}
	printf("\n\tno\tprice\tqty\ttotal\tgst\tbillamount");
	for(i=0;i<5;i++)
	{
		total=price[i] * qty[i];
		gst=total * 0.05;
		billamount=total + gst;
		printf("\n\t%d\t%d\t%d\t%d\t%.2f\t%d",no[i],price[i],qty[i],total,gst,billamount);
	}
	getch();
}