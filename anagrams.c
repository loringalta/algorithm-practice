#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void anag(char string[], char string2[]){
	int len1 = strlen(string);
	int len2 = strlen(string2);
	int i, j = 0;
	char tmp;
	while(i < len2){
		printf("%s\n", string);		
		if (string[i] == string2[i]){
			i++;
		}

		for (j = i; j < len1 -1; j++){
			tmp = string[j];
			string[j] = string[j+1];
			string[j+1] = tmp;
		}

	}

}

int main(){
	char str[] = "PANAMA";
	char str2[] = "ANAPMA";
	anag(str, str2);
	char str3[] = "GUM";
	char str4[] = "MUG";
	anag(str3, str4);
	return 0;
}