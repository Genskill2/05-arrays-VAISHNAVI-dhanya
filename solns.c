/* Enter your solutions in this file */
#include <stdio.h>;
#include <assert.h>
int max(int x[], int  num_x);

int max(int x[], int  num_x){
   
   int max_x;
   max_x=x[0];
    
   for(int i=0;i<num_x;i++){
      if(x[i]>max_x){
          max_x=x[i];
      }
     }
   return max_x;
   
   
}
  
int main(void) {
  int x[] = {9,5,6,10,2,-3,4};
  assert (max(x, 7) == 10);

  int y[] = {5};
  assert (max(y, 1) == 5);
  printf("Max: passed\n");
  }
