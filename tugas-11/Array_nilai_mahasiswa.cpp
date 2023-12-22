#include <stdio.h>

int main () {
	int a[12]={60,80,55,90,75,40,50,85,70,65,45,55};
	int b[12];
	int c[12];
	int i,nrr,n,j,ii,j0;
	
	printf("Isi Array A : ");
	for (i=0;i<12;i++) { 
	printf("%3i",a[i]);
	n=n+a[i];
	}
	
	nrr=n/12;
	printf("\nNilai rata-rata : %i ",nrr);
	
	j = 0;
	for (i=0;i<12;i++) {
		if (a[i]>nrr) {    // isi array c dengan array a
		b[j] = a[i];
		j++;	
		} else {
		j0++;
		}
	}
	printf("\nIsi Array B : ");
	for (i=0;i<j;i++) { 
	printf("%3i",b[i]);
	}
	for (i=0;i<j0;i++) { 
	b[i]=0;
	printf("%3i",b[i]);
	}

	j = 0;
	j0 = 0;
	for (i=0;i<12;i++) {
		if (a[i]<nrr) {    // isi array c dengan array a
		c[j] = a[i];
		j++;	
		} else {
		j0++;
		}
	}
	
	printf("\nIsi Array C : ");
	for (i=0;i<j;i++) { 
	printf("%3i",c[i]);
	}
	for (i=0;i<j0;i++) { 
	c[i]=0;
	printf("%3i",c[i]);
	}
	
}
