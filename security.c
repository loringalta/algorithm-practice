#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int T1;
int T2;

void value(int st1, int gt2){
	if(((st1%3) != (gt2%3)) && ((st1/3) != (gt2/3))){
		printf("false\n");
	}
	else
		printf("true\n");
}

int security(int sdigit, int gdigit){
	int i;
	int temp1;
	int temp2;
	int error = 0; 
	for (i = 0; i < 3; i++){
		temp1 = sdigit%10;
		temp2 = gdigit%10;

		if(temp1 == temp2){
			sdigit = sdigit/10;
			gdigit = gdigit/10;
		}
		if(temp1 != temp2){
			error++; 
			if (error > 1){
				printf("security code does not match. please try again\n");
			}
			else{
			T1 = temp1; 
			T2 = temp2;
			value(T1, T2);
			} 
		}
	}
	return 0;
}

int main(){
	int securitydigit = 1478;
	int guessdigit = 1278;
	security(securitydigit, guessdigit);
}