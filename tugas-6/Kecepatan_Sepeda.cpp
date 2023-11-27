#include <stdio.h>

int main() {
	int k=0,d;
	printf("Kecepatan 2 meter/detik");
	for (d=0;d<101;d++) {
	printf("Ketika %i detik, ",d);
	printf("Maka Jarak yang di tempuh %i meter \n",k);
	k=k+2;
	}
}
