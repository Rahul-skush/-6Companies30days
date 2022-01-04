class Solution{
  vector<int> find(vector<int> &arr){
    priority_queue<int> pq;
    for(auto x : arr){
    pq.push(x);
      if(pq.size()>=11) pq.pop();
    }

    vector<int> ans;
    while(!pq.empty())
    {
    ans.push_back(pq.top()); pq.pop();
    }
    return ans;
  }
};
