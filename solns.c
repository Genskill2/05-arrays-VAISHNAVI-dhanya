/* Enter your solutions in this file */
#include <stdio.h>

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
int min(int x[], int num_x){

    int min_x;
    min_x=x[0];
    
    for(int i=0;i<num_x;i++){
      if(x[i]<min_x){
      min_x=x[i];
          
      }
    }
   return min_x;
}
float average(int x[], int num_x){

    float sum;
    sum=0;
    
   for(int i=0;i<num_x;i++){
      sum=sum+x[i];
      
   }
   return sum/num_x;
}



