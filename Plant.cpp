#include <cstdio>
long long findPower(long long base,long long exponent){
  
  
  const unsigned long long N =100000007;
  
  
  if(exponent == 0)
  {
    return 1;
  }
  
  else if(exponent == 1)
  {
    return base;
  
  }
    else{
        unsigned long long output(1);
     
      
       while(exponent > 0){
       
         
         if(exponent % 2){output *= base; output %= N;}
         
         
         base *= base; base %= N;
            exponent /= 2;
        }
        return output;
    }

    return -1;
}
