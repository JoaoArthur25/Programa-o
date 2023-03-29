#include <stdio.h>
int fatorial(int n){
	if (n==0){
		return 1;
	} else{
		return n*fatorial(n-1);
	}
}
int main(){
	int num,fat;
	do{ 
	printf ("Digite um numero positivo:\n");
	scanf("%d",&num);
	} while (num<0);
	fat=fatorial(num);
	printf("O fatorial de %d e %d",num,fat);
	return 0;
}