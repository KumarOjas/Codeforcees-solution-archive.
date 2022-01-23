#include <cstdio>
#include <cmath>

int main () {
  
  int n,m;
  
  
  scanf ("%ld%ld",&n,&m);
  
  
  
  m%=(n*(n+1)/2);
  
  
  
  int x =(sqrt(8 * m + 1) - 1)/ 2.0;
 
  
  printf("%d\n", m - x * (x + 1) / 2);
  
  
  return 0;
}
  
  
  
  
  
  
  
  
  
  
  
