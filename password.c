#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void password(int num, int prev, int input)
{
	int i;
	if (input == 0) {
		printf("%d\n", num);
		return;
	}
	for (i = (prev+1); i < 10; i++){
		password(num* 10 + i, i, input-1);
	}
}
int main()
{
	password(0, 0, 3);
	return 0;
}