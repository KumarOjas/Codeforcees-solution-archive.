#include <cstdio>


int main () {

  const int timetoEat = 1;
  
  const int timetoJump =1;
  
  long numTrees;
  
  
  scanf ("%ld",&numtrees);
  
  
  
  int *heights =new int[numtrees];
  
  
  
  for (long k=0;k<numtrees;k++)
    
  
  {
  
    scanf ("%d",heights + k);}
  
   int currentHeight =0;
   long totalTime =-1;

  for (int t=0;t<numtrees;t++){
    
     if(currentHeight > heights[t]){totalTime += currentHeight - heights[t] + timeToJump;}
        else{totalTime += timeToJump + heights[t] - currentHeight;}
        currentHeight = heights[t];
        totalTime += timeToEat;
    }

    printf("%ld\n", totalTime);
    return 0;
}
    
    
    
  
}
  
