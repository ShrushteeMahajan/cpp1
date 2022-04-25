#include<stdio.h>
#include<conio.h>
void main()
{
		int a[10];
		int i,f,j,num,temp,ser;
		int low,mid,high;
		clrscr();
	printf("enter the value of array\n");
	scanf("%d",&num);
	printf("enter the elements one by one \n");
	for(i=1;i<=num;i++)
	{
		 scanf("%d",&a[i]);
	}
		 for(i=1;i<=num;i++)
		 {
				 for(j=1;j<=num-1;i++)
				 {
					 if([j]>a[j+1])
					 {
								temp=a[j];
								a[j]=a[j-1];
								a[j+1]=temp;
					 }
		 }
}
 printf("sorted array  is...\n");
 for(i=1;i<=num;i++)
 {
			printf("%d\n",qa[j]);
 }
	pritf("enter the element to be searched\n");
	scanf("%d",&ser);
	low=1;
	high=num;
	while(low<=high)
	{
		mid=(low+high)/2;
		if(a[mid]==ser)
		{
			printf("elements is found at %d",mid);
			return;
		}
		else if(a[mid]<ser)
		low=mid+1;
		else if (a[mid]>ser)
		high=mid-1;
	}
	 printf("\n elements is not found");
	 getch();
	}
