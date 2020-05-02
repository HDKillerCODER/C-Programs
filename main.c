//
//  main.c
//  fibonacci recursion c
//
//  Created by Harsh kumar on 27/04/20.
//  Copyright © 2020 Harsh kumar. All rights reserved.
//

#include <stdio.h>
int main()
{
    long long n,series;
    scanf("%lld",&n);
    long long fib(long long);
    series=fib(n);
    series=0;
    printf("%lld ",series);
}
long long a=0,b=1,c;

long long fib(long long n)
{
    if(n==0)
        return c;
    else
    {
        c=a+b;
        a=b;
        b=c;
        printf("%lld \n",c);
        return fib(n-1);
    }
}
//354224848179261915075
