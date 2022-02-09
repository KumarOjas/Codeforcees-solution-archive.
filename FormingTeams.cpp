#include <cstdio>
#include <vector>

void dfs (long node, const std::vector<std::vector<long> > &g, std::vector<bool> &vis, std::vector<long> &cycle){

 
  if(vis[node])
  {
    return;
  }
    vis[node] = 1;
  
  cycle.push_back(node);
  
  for(long p = 0; p < g[node].size(); p++){if(!vis[g[node][p]]){dfs(g[node][p], g, vis, cycle);}}
  
  return;
}
