//BINARY SEARCH USING DYNAMIC MEMORY ALLOCATION
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int c,x=0,choice;
void main()
{
 
    int *arr,i,n,data,low,high,mid;
 
    printf("Enter the size of an array: ");
    scanf("%d",&n);
    arr= (int*)malloc(n*sizeof(int));
 
    printf("Enter the elements in ascending order: \n");
    for(i=0;i<n;i++)
    {
    printf("enter %d element in array  ",i+1);   
    scanf("%d",(arr+i));
    }
    
    
    while(x<1)
    {
        printf("\n");
        printf("*----------------------*");
        printf("\n 1.Search element");
        printf("\n 2.Print array ");
        printf("\n 3.EXIT ");
        printf("\n ENTER YOUR CHOICE \n");
        scanf(" %d",&choice);

        switch (choice)
        
        {
        case 1:
        printf("Enter the number to be search: ");
        scanf("%d",&data);
        //Binary Search
        low=0,high=n-1;
        while(low<=high)
        {
            c=0;
         mid=(low+high)/2;
         if(data==arr[mid])
            {
             c=c+1;
             break;
         }
         else if(data<arr[mid])
            {
             high=mid-1;
         }
         else
             low=mid+1;
       }
        if(c==1)
        printf("The number is found at position %d\n",mid+1);
        else
        printf("Data not found\n");
        break;
        case 2:
        printf("\nenter element in array are \n ");   
        for(i=0;i<n;i++)
        {
         printf("[%d]",*(arr+i));
        }
        break;
        case 3:
        x=x+1;
        break;
        default:
        printf("invalid choice");
       
        }

    
        }
}
