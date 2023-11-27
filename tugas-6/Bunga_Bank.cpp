#include <stdio.h>

int main () {
	int s = 1000000,b,t,i,h;
	printf("Saldo %i",s);
	h=s;
	for (b=1;b<10;b++) {
		printf("\nBulan ke %i ",b);
		h=h+(h*2)/100;
		printf("dengan Saldo %i",h);
	}

}
