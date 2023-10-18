/* 2. Buatlah program dalam bahasa C untuk menyelesaikan masalah berikut :
Program akan menerima masukan berupa kode, jenis dan harga, dengan jenis adalah "A", "B", dan "C".
Untuk setiap jenis, masing-masing akan diberikan diskon sebesar 10% untuk A, 15% untuk B, dan 20% untuk C.
Program akan menghitung berapa harga setelah didiskon.
Contoh masukan :
Kode = 10
Jenis = B 
Harga = 10000
Contoh keluaran :
Jenis barang B mendapat diskon = 15%, Harga setelah didiskon = 8500 */
#include <stdio.h>

int main () {
	char j;
	int dp,k,h,hsd;
	float d;
	
	printf("Kode  : ");  scanf(" %i",&k);
	printf("Jenis : ");  scanf(" %c",&j);
	printf("Harga : ");  scanf(" %i",&h);
	
	switch(j) {
        case 'A':
            d = 0.1;
            break;
        case 'B':
            d = 0.15;
            break;
        case 'C':
            d = 0.2;
            break;
        default:
            d = 0;
    }	
    
	hsd= h-(h*d);
	dp=(d * 100);
	
	printf("Jenis Barang %c ",j);
	printf("mendapatkan diskon = %d%%",dp);
	printf(", harga setelah diskon = %i",hsd);
	
}
