//WRITE A PROGRAM TO FIND THE SMALLEST ELEMENT AND LARGEST ELEMENT AND SWAP THEM IN AN ARRAY//
#include<stdio.h>
void main()
{
    int n,i,a[n],large,small,t;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    small=a[0];
    large=a[0];
    for(i=0;i<n;i++)
    {
        if(small>a[i])
        {
            small=a[i];
        }
        if(large<a[i])
        {
            large=a[i];
        }
    }
    printf("The smallest and largest element are %d and %d",small,large);
    t=small;
    small=large;
    large=t;
    printf("The smallest and largest element after swapping are %d and %d",small,large);
}
