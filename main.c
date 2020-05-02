//
//  main.c
//  C taylor series
//
//  Created by Harsh kumar on 02/05/20.
//  Copyright © 2020 Harsh kumar. All rights reserved.
//

#include <stdio.h>
double tail(int,int);
int main()
{
    int x,n;
    double res;
    printf("Enter the value of e and x: ");
    scanf("%d%d",&x,&n);
    res=tail(x,n);
    printf("\nThe result is: %lf",res);
}
double tail(int x,int n)
{
    static double p=1,f=1;
    double r;
    if(n==0)
        return 1;
    
        r=tail(x,n-1);
        f=f*n;
        p=p*x;
        return r+(p/f);
}
