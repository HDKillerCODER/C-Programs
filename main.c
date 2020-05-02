//
//  main.c
//  C power using recursion more effective way
//
//  Created by Harsh kumar on 02/05/20.
//  Copyright © 2020 Harsh kumar. All rights reserved.
//

#include <stdio.h>
int power(int,int);
int main()
{
    int a,b,res;
    printf("Enter the base number: ");
    scanf("%d",&a);
    printf("\nEnter the power number: ");
    scanf("%d",&b);
    res=power(a,b);
    printf("The result is: %d\n",res);
}
int power(int a,int b)
{
    if(b==0)
        return 1;
    else
        if(b%2==0)
            return power(a*a,b/2);
    else
        return a*power(a*a,(b-1)/2);
}
