#include <stdio.h>

int main () {
	char ah[10]={'S','T','T','M','A','N','D','A','L','A'};
	int p,mh,k=0,hh;
	
	for (p=0;p<11;p++) {
	printf("%c ",ah[p]);
	}
	p=0;
	
	printf("\nMasukan bilangan integer = ");
	scanf("%c",&mh);
	
	while (p<=9) {
		if (ah[p]==mh) {
			k=k+1;;
		} else {
			k=k+0;
		}
		p++;
	}
	if (k>=1) {
		printf("Ada\n");
		printf("%i",k);
	} else {
		printf("Tidak ada");
	}
	return 0;

}
