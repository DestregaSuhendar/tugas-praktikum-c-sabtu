#include <stdio.h>

int main () {
	int x[5]={12,8,17,5,15};
	int y[7]={5,11,7,25,9,12,14};
	int c1[12]={0};
	int c2[12]={0};
	int i,j;
	
	printf("Isi Array A : ");
	for (i=0;i<5;i++) { 
	printf("%3i",x[i]);
	}
	
	printf("\nIsi Array B : ");
	for (i=0;i<7;i++) { 
	printf("%3i",y[i]);
	}
	
	j = 0;
	for (i=0;i<5;i=i+2) {   // isi array c dengan array a
		c1[j] = x[i];
		j++;		
	}

	for (i=1;i<7;i=i+2) { // isi array c dengan array b
		c1[j] = y[i];
		j++;	
	}
	for (i=6;i<7;i++) { // isi array c dengan array b
		c1[j] = y[i];
		j++;	
	}
	
	printf("\nIsi Array C : ");
	for (i=0;i<12;i++) { 
	printf("%3i",c1[i]);
	}
	
	j = 0;
	for (i=0;i<5;i=i+2) {   // isi array c dengan array a
		c2[j] = x[i];
		j++;		
	}
	j = 7;
	for (i=7;i>5;i--) { // isi array c dengan array b
		c2[j] = y[i];
		j++;	
	}
 	j = 9;
	for (i=5;i>0;i=i-2) { // isi array c dengan array b
		c2[j] = y[i];
		j++;	
	}
	
	printf("\nIsi Array C : ");
	for (i=0;i<12;i++) { 
	printf("%3i",c2[i]);
	}
	
	return 0;
}
