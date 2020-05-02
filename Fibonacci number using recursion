//
//  main.c
//  C Fibonacci series recursion
//
//  Created by Harsh kumar on 02/05/20.
//  Copyright © 2020 Harsh kumar. All rights reserved.
//

#include <stdio.h>
int fib(int);
int main()
{
    int n,res;
    printf("Enter the number: ");
    scanf("%d",&n);
    res=fib(n);
    printf("The result is: %d",res);
}

int fib(int n)
{
    if(n==1||n==0)
        return n;
    return fib(n-1)+fib(n-2);
}
