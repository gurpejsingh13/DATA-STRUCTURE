#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main() {
	int a,*ptr,i,data ,temp=0;
	printf("enter number of element \t");
	scanf("%d",&a);
	ptr=(int *) malloc(a*sizeof(int)) ;

	if(ptr==NULL) {
		printf("memory not available");
	}
	for(i=1; i<=a; i++) {
		printf("enter %d element in malloc block\t",i);
		scanf("%d",ptr+i);
	}
	
	printf("\n enter element for earch\t");
	scanf("%d",&data);
	for(i=1; i<=a; i++)
	{
		if(*(ptr+i)==data)
		{
			temp+=1;
			break;
		}
		
	}
	if(temp==0)
	{
	printf("\n Data not found");
	}
	else
	{
	 printf("\n Element found at %d memory location and %d index",ptr+i,i);
	}
	ptr=NULL;
	free(ptr);

	getch();


}
