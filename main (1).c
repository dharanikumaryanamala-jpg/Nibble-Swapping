/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<stdio.h>
#include<stdlib.h>
int main()
{
        int n,c=0,swap;
        unsigned int n2,n4;
        printf("Enter the integer:\n");
        scanf("%d",&n);
        for(int bit=31;bit>=0;bit--)
        {
                printf("%d",(n>>bit)&1);
                c++;
                if(c==4)
                {
                        printf(" ");
                        c=0;
                }
        }
        printf("\n");
        n2=(n>>4)&0xF;
        n4=(n>>12)&0xF;
        swap=n&~(0xF<<4)&~(0xF<<12);
        swap|=(n2<<12)|(n4<<4);
        for(int bit=31;bit>=0;bit--)
        {
                printf("%d",(swap>>bit)&1);
                c++;
                if(c==4)
                {
                        printf(" ");
                        c=0;
                }
        }
        printf("\n");
        printf("%d\n",swap);
}
