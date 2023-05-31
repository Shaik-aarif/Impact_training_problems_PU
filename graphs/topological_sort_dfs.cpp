private:
    void dfs(int node ,  vector<int> adj[] , stack<int> &st , int vis[]){
        
        vis[node] = 1;
        for(auto x : adj[node]){
            if(!vis[x]){
                dfs(x , adj ,st , vis);
            }
        }
        st.push(node);
    }
	public:
	vector<int> topoSort(int V, vector<int> adj[]) 
	{
	   stack<int>st;
	   int vis[V]= {0};
	   for(int i = 0 ; i< V ; i++){
	       if(!vis[i]){
	           dfs(i , adj , st , vis);
	       }
	   }
	    
	    
	   vector<int>ans;
	   while(!st.empty()){
	       ans.push_back(st.top());
	       st.pop();
	   }
	    
	   return ans;