#include <cstdio>

int main () {
  
  const int Max =1000;
 
  const int halfMax =Max/2;
  
  long n;
  
  scanf ("%ld",&n);
  
  int diff(0),first (0),second(0);
  
  for (long k =0;k<n;k++){
    
    
    scanf ("%d%d",&first,&second);
    if (diff + first <= halfmax){diff +=first;print("A");}
    
    else {diff -= second ;
         
     printf("G");    
         }
    printf("\n");
    
    return 0;
    
  }
