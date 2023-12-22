#include <stdio.h>
#include <string.h>

int main() {
   char a[11] = "JOGJAKARTA";
   int h[26] = {0}; // to store the count of each letter

   for (int i = 0; i < strlen(a); i++) {
      h[a[i] - 'a']++;
   }

   int maks = 0; // to store the max count
   for (int i = 0; i < 26; i++) {
      if (h[i] > h[maks]) {
         maks = i;
      }
   }

   printf("Jumlah huruf terbanyak dalam array A adalah %d\n", h[maks]);
   printf("Huruf yang terbanyak adalah '%c'\n", 'A' + maks);

   return 0;
}
