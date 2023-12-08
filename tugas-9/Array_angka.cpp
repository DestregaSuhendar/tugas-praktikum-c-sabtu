#include <stdio.h>

int main () {
	int ab[11]={12,17,10,5,15,25,11,7,25,16,19};
	int p,mb,k=0;
	
	for (p=0;p<11;p++) {
		printf("%i ",ab[p]);
	}

	printf("\nMasukan bilangan integer = ");
	scanf("%i",&mb);
	
	p=0;
	while (p<=10) {
		if (ab[p]==mb) {
			k=k+1;
		} else {
			k=k+0;
		}
		p++;	
	}
	if (k>=1) {
		printf("Ada\n");
		printf("Lokasi bilangan yang sama: ");
		p=0;
		for (p=0;p<11;p++) {
			if (ab[p]==mb) {
			printf("%i ",p);	
			}	
		}
	} else {
		printf("Tidak ada");
	}
	return 0;
}
