#include <stdio.h>
int main(){

char a[8]="JAKARTA";

int i,ii,k=0,j=0;

	printf("Isi Array A : ");
	for (i=0; i<8; i++) {
	printf("%3c", a[i]);
	}
	
	for (i=0;i<8;i++) {
		j++;
		for (ii=8;ii>j;ii--) {
			if (a[i]==a[ii]) {
				k= 1; 
				if (k==1) {
				printf("\nada huruf yang sama yaitu %c",a[i]);
				return 0;
				} 	
			}
		}
	}
		printf("\nTidak ada huruf yang sama");
		return 0;
	}
	
