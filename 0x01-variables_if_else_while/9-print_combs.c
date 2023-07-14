/*
*File:9-print_comb.c
*Auth:Musa_kalamzAOgunsolu
*/

#include<stdio.h>

/**
*main-Printsallpossiblecombinationsofsingle-digitnumbers.
*
*Return:Always0.
*/
intmain(void)
{
intnum;

for(num=0;num<=9;num++)
{
putchar((num%10)+'0');
if(num==9)
continue;

putchar(',');
putchar('');
}

putchar('\n');

return(0);
}
