#include<stdio.h>
void main()
{  int a,b,c;
   int ram,shyam, ajay;
     printf("enter ram's age:");
    scanf("%d",&ram);
    printf("enter shyam's age:");
    scanf("%d",&shyam);
    printf("enter ajay's age:");
    scanf("%d",&ajay);
	
     if(ram>shyam && ram>ajay)
     {
	   printf("ram is oldest",ram);
	 }
	 if(shyam> ram && shyam>ajay)
     {printf("%d is greatest among",shyam);
	 }
	 if(ajay>ram && ajay> shyam)
     {printf("ajay is oldest",ajay);
	 }

}