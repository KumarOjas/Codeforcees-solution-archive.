#include <iostream>

#include <cstdio>


int main () {

  long numPlaces,timelimit;
  
  scanf ("%ld%ld",&numPlaces,&timeLimit);
  
  
  long joy=0,time =0,newJoy =0,maxjoy =-10000000;
  
  
  while (numPlaces--)
  {
  
    scanf ("%ld%ld",&joy,&time);
    
    newJoy = (time<timelimit)?joy:joy - (time - timeLimit);
    
    if(newJoy>maxJoy){maxJoy = newJoy;}
  }
  
  printf("%ld\n",maxjoy);
  
  return 0;
}
    
  
  
