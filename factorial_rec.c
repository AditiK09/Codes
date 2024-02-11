#include<Stdio.h>
int fac(int n){
	if(n==1 || n==0) return 1;
	int facAns = n * fac(n-1);
	return n * fac(n-1);
}
int main(){
	int n;
	printf("enter factorial value n: ");
	scanf("%d",&n);
	printf("%d",fac(n));
	return 0;
}