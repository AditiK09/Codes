#include<stdio.h>
int power(int a,int b){
	if(b==0) return 1;
	return a * power(a,b-1);
}
int main(){
    int b,ex,pow; 
	printf("enter the base value: ");
	scanf("%d",&b);
	printf("enter the exponential value: ");
	scanf("%d",&ex);
	printf("%d is the power of %d & the result is %d ",b,ex,power(b,ex));
	return 0;
}