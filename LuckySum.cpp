#include <cstdio>
#include <iosteram>
#include <vector>



std::vector<long long> findNext(std::vector<long long> luckyVec)

{

    bool done(0);

  
    for(int p = 0; p < luckyVec.size(); p++){
    
      
      if(luckyVec[p] == 4){luckyVec[p] = 7; done = 1; break;}
      
      
      else{luckyVec[p] = 4;}
    }
   
  
  if(!done){luckyVec.push_back(4);}

  
  
  return luckyVec;


}

