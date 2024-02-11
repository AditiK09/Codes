#include<stdio.h>
int print(int x, int n){
	if(x>n)  return n;
		printf("%d\n",x);
		print(x+1,n);
	
}

int main(){
	int n;
	printf("enter value of n:");
	scanf("%d",&n);
	print(1,n);
	return 0;
}