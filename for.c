#include <stdio.h>

int main() {
   int i;
   
   printf("In bang so: \n");
   for(i = 1; i <= 10; i++) {
      printf(" %3d", i);
      printf("\n");
   }

   return 0;
}