#include<stdio.h>
int collatz;
int main(){
	
		printf("Ingrese un valor: ");
		scanf("%d",& collatz);
	do{
		if(collatz %2 == 0){
			collatz= collatz/2;
		}
		else if(collatz %2 != 0){
			collatz= collatz*3+1;
		}
		printf("\n%d", collatz);	
	}while(collatz!=1);
}
