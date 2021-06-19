/* Enter your solutions in this file */
#include <stdio.h>


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
int mode(int x[], int num_x){

     int mode_x;
     int mode_count=0;
     
  for(int i=0;i<num_x;i++){
    int count =1  ;
    for(int j=0;j<i;j++){
       if(i!=j && x[i]==x[j]){
          count++;
          
           
       }
    }
     if (count>mode_count){
         mode_count=count;
         mode_x=x[i];
     }
   }
    return mode_x;
   }   

int factors(int x, int f[]){
    int y=0;
    int n=2;
    while(x!=1){
        if(x%n==0){
          f[y]=n;
          y++;
          x=x/n;
          
        }
       else{n++;}
    }
   return y;
}





