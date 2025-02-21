/*
author:ekaipeter
reg no.d33-2442-2023
Program:to find simple interest 
date:20/2/2025
*/
#include<stdio.h>
#include<math.h>
int main(){
// variable decelerations and initialization;
double total_amount;
double principle; 
double rate;
double time;
double compound_interest;
int n;
printf("program to calculate compound interest: \n");
    printf("enter principle amount:\n");
    scanf("%lf",&principle);
    printf("enter rate of interest :\n");
    scanf("%lf",&rate);
    printf("enter the time in years:\n");
    scanf("%lf",&time);
    printf("enter the number of times interest compounded per year\n");
    scanf("%d",&n);
    rate=rate/100;
    total_amount=principle*pow((1+rate/n),(n*time));
    compound_interest=total_amount-principle;
    printf("total amount is %.2f",total_amount);
    printf ("the compound interest is %2f", compound_interest);
    return 0;
}