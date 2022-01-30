#include <cstdio>

int main () {
  
  long long left(0),right(0),index(0);
  scanf ("%ld%ld%ld",&left,&right,&index);
  
  int count = 1;
  
  while (count ++<index){
    
    long long temp = left+ right;
    left=right;
    right=temp;
    
  }
  printf("%ld\n",right);
  
  return 0;
}
