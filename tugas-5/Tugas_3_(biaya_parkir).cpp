/*3. Tulis program untuk menentukan biaya parkir yang dihitung berdasarkan lama parkir.
 Lama parkir dihitung dari selisih jam masuk dan jam keluar diinput.
 Biaya parkir 2 jam pertama 2000, perjam berikutnya 500.*/
 #include <stdio.h>
 int main (){
 	int jm,jk,lp,bp;
 	printf("Jam masuk  : ");  scanf(" %i",&jm);
	printf("Jam keluar : ");  scanf(" %i",&jk);

	if (jm < 12 || jk < 12) {
		if (jm > jk ) {
			jk=lp+12+jk;
			lp=jk-jm;
			bp=1000+(lp*500);
			printf("lama parkir : %i jam",lp);
			printf("\nBiaya parkir : %i ",bp);	
		}
		else
		{
			lp=jk-jm;
			if (lp<2) {
				
				bp=2000;
				printf("lama parkir : %i jam",lp);
				printf("\nBiaya parkir : %i ",bp);  
			}
			else
			{
	    		bp=1000+(lp*500);
				printf("lama parkir : %i jam",lp);
				printf("\nBiaya parkir : %i ",bp);	
			}
		}
	}
	else
	{
		printf("Catatan: jam harus berupa angka 1-12");	
	}
	
	 
 }
