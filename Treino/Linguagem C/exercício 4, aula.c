#include <stdio.h>
int main() {

int num1,num2,num3;
do{


printf("Digite tres numeros diferentes entre si:\n");
printf("Digite o primeiro numero:\n");
scanf("%d",&num1);
printf("Digite o segundo numero:\n");
scanf("%d",&num2);
printf("Digite o terceiro numero:\n");
scanf("%d",&num3);
if (num1>num2 && num1>num3 && num3<num2) {
	printf("%d < %d < %d\n ",num3,num2,num1);
	break;
}
else if (num1<num2 && num1>num3){
	printf("%d < %d < %d \n",num3,num1,num2);
	break;
}
else if (num1>num2 && num2<num3 && num1>num3){
	printf("%d < %d < %d\n ",num2,num3,num1);
	break;
}
else if(num2<num1 && num2<num3 && num3>num1){
	printf("%d < %d < %d\n ",num2,num1,num3);
	break;
}
else if(num1<num2 && num1<num3 && num2<num3){
	printf("%d < %d < %d \n",num1,num2,num3);
	break;
}
else if(num1<num2 && num1<num3 && num3<num2){
	printf("%d < %d < %d\n ",num1,num3,num2);
	break;
}
else if(num1==num2 || num1==num3 || num2==num3){
	printf("Existem um ou mais numeros iguais, tente novamente...\n\n");
	
}
}
while (num1==num2 || num1==num3 || num2==num3);
return 0;

}




