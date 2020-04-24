//WRITE A PROGRAM TO FIND THE SMALLEST ELEMENT AND LARGEST ELEMENT//
#include<stdio.h>
int main()
{
    int n,i,large,small,t;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        printf("Enter the %d element: ",i+1);
        scanf("%d",&a[i]);  //taking inputs from user
    }
    small=a[0];
    large=a[0];
    for(i=0;i<n;i++)
    {
        if(small>a[i])  //condition for smallest number
        {
            small=a[i];
        }
        if(large<a[i]) //condition for largest number
        {
            large=a[i];
        }
    }
    printf("\nThe smallest element is  %d",small);
    printf("\nThe largest element is  %d\n",large);
}
