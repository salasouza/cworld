#include <stdio.h>
 
int main () {

   int i;

   for( i = 25; i <= 30; i++ ){ // a = a + 1 <======> i++
   /* 
      i = 25  --> initial 
      i <=    --> condition
      i++     --> increment 
   */

      printf("value of i: %d\n", i);

   }
 
   return 0;
}