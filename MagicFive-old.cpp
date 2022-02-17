#include <cstdio>
#include <iostream>

long long modulePower(long long base, long long power, long long modulo){
  
  
  if(power < 0){return 0;}
  
  if(power == 0){return 1;}
  
  long long output(0);
  
  
  if(power % 2 == 0){output = moduloPower((base * base) % modulo, power/2, modulo); output %= modulo;}
  
  else{output = base * moduloPower((base * base) % modulo, (power - 1)/ 2, modulo); output %= modulo;}
  
  return output;
}
