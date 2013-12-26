#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void anag(char string[], char string2[]){
	int len1 = strlen(string);
	int len2 = strlen(string2);
	int i, j = 0;
	char tmp;
	printf("%s\n", string); 
	while(i < len2){
		if (string[i] == string2[i]){
			i++;
		}
		for (j = i; j < len1 -1; j++){
			tmp = string[j];
			string[j] = string[j+1];
			string[j+1] = tmp;
			printf("%s\n", string);		}
	}
}

int main(){
	char str[] = "EVIL";
	char str2[] = "LIVE";
	anag(str, str2);
	return 0;
}