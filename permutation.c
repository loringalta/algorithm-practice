#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int permutation (char* string, char* string2)
{
	int new[128] = {0};
	int n[128] = {0};  
	int i, j, k = 0;
	int result = 1;
	int lens = strlen(string);
	int lens2 = strlen(string2);
	if (lens < lens2 || lens2 < lens)
	{
		return 0;
	}
	else
	{
	for (i = 0; i < lens; i++)
	{
		//printf("%d\n", string[i]);
		new[string[i]] += 1;
	}
	for (k = 0; k < lens2; k++)
	{
		//printf("%d\n", string2[k]);
		n[string2[k]] += 1;
	}
	for (j = 0; j < 128; j++)
	{
		//printf("%d %d\n", new[j], n[j]);
		if (new[j] != n[j]){
			result = 0;
			return result;
		}
	}
}
return result;
}

int main()
{
	int true = permutation("jenniferma", "eefjnniar");
	printf("it is: %d\n", true);
	return 0;
}