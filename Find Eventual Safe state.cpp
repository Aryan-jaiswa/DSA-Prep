class Solution {
public:
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
        int n=graph.size();
        vector<int>adjRev[n];
        vector<int>Indegree(n,0);
        queue<int>q;
        for(int i=0;i<n;i++){
            for(auto j:graph[i]){
                adjRev[j].push_back(i);
                Indegree[i]++;
            }
        }
        for(int i=0;i<n;i++){
            if(Indegree[i]==0){
                q.push(i);
            }
        }
        vector<int>safeNodes;
        while(!q.empty()){
            int node=q.front();
            q.pop();
            safeNodes.push_back(node);
            for(auto it:adjRev[node]){
                Indegree[it]--;
                if(Indegree[it]==0) q.push(it);
            }
        }
        sort(safeNodes.begin(),safeNodes.end());
        return safeNodes;
    }
};
