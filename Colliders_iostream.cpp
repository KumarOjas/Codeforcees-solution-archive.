#include <cstdio>
#include <vector>
#include <set>


std::vector<long> getFactors(long x, std::vector<bool> qprime)

{


  std::vector<long> ans;
  
  
  for(long p = 2; p * p <= x; p++){
        if(x % p != 0)
        {
          continue;
        }
        
    if(qprime[p]){ans.push_back(p);
     }
     
    if(qprime[x / p]){ans.push_back(x / p);}
    
  }

  
  if(ans.empty()){ans.push_back(x);}
  
  return ans;
}
