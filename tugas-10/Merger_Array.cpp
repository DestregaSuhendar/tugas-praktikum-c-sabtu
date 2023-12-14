#include <stdio.h>

int main () {
	int a[5]={12,17,10,5,15};
	int b[7]={25,11,7,25,16,22,14};
	int c[12]= {0};
	int i,j=0;
	
	printf("isi Array A : ");
	for (i=0;i<5;i++) {
		printf("%3i",a[i]);
	}
	printf("isi Array b : ");
	for (i=0;i<7;i++) {
		printf("%3i",b[i]);
	}
	
	for (i=0;i<5;i++) {
		if (a[i]%2==1) {
			c[j]=a[i];
			j++;
		}
	}
		for (i=0;i<7;i++) {
		if (b[i]>15) {
			c[j]=b[i];
			j++;
		}
	}
	printf("\nIsi Array C : ");
	printf("isi Array c : ");
	for (i=0;i<12;i++) {
		printf("%3i",c[i]);
	}
}
