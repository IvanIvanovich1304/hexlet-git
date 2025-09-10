#include <stdio.h>

int main (void)
{
	int N;
	scanf("%d", &N);

	int temp = N;
	int revers = 0;
	while (temp != 0){
		revers *= 10;
		revers = revers + temp%10;
		temp /= 10;
	}

	printf("%d", revers);

	return 0;
}
