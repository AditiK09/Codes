#include<stdio.h>
void main(){
	int n;
	printf("enter the no of digits: ");
	scanf("%d",&n);
	int j;
	printf("enter ur no: ");
	scanf("%d",&j);
	int add,rem=0;
	for(int i=0;i<n;i++)
	{
	rem=j%10;
	add=rem+add;
	j=j/10;
	}
	printf("%d",add);
}