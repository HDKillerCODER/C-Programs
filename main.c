//
//  main.c
//  Duplicates numbers in an array
//
//  Created by Harsh kumar on 03/05/20.
//  Copyright © 2020 Harsh kumar. All rights reserved.
//

#include <stdio.h>
int main()
{
    int a[5],i,j,flag=0;
    for(i=0;i<5;i++)
    {
        printf("\nEnter the numbers at position %d: ",i+1);
        scanf("%d",&a[i]);
    }
    for(i=0;i<5;i++)
    {
        for(j=i+1;j<5;j++)
        {
            if(a[i]==a[j]&&i!=j)
            {
                flag=1;
                printf("\nThe duplicate number %d is found at indexes %d and %d\n",a[i],i,j);
            }
        }
    }
    if(flag==0)
        printf("\nNo duplicate numbers found");
}
