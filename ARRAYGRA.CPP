#include<stdio.h>
#include<conio.h>
void main()
{
	clrscr();
	int no[3],s1[3],s2[3],s3[3],i,total[3],per[3],grade[3];//A[3],B[3],C[3],D[3];//
	char A,B,C,D;
	for(i=0;i<3;i++)
	{
		printf("enter roll no[%d]:",i);
		scanf("%d",&no[i]);
		printf("enter s1[%d]",i);
		scanf("%d",&s1[i]);
		printf("enter s2[%d]",i);
		scanf("%d",&s2[i]);
		printf("enter s3[%d]",i);
		scanf("%d",&s3[i]);

	}
		printf("\n\tno\ts1\ts2\ts3\ttotal\tper\tgrade");
	for(i=0;i<3;i++)
	{
		total[i]=s1[i]+s2[i]+s3[i];
		per[i]=(total[i]/3);
		if (s1[i]<35 && s2[i]<35 && s3[i]<35)
		{
			printf("\nfail");
		}
		else
       /*	}
	for(i=0;i<5;i++)
	{*/
		if(per[i]>70)
		{
			printf("A");
		}
		else if(per[i]>55 && per[i]<70)
		{
			printf("B");
		}
		else if(per[i]>35 && per[i]<55)
		{
			printf("C");
		}
		else if(per[i]<35)
		{
			printf("fail");

		}

		printf("\n\t%d\t%d\t%d\t%d\t%d\t%d\t%c",no[i],s1[i],s2[i],s3[i],total[i],per[i],grade[i]);
	}
	getch();
 }