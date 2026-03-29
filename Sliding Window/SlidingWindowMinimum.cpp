#include<bits/stdc++.h>

using namespace std;

struct AggStack{
  stack<pair<int,int>>st;

  void push(int x){
    int curr = st.empty() ? x: min(st.top().second,x);
    st.push({x,curr});
  }

  void pop(){
    st.pop();
  }

  int agg() const{
    return st.top().second;
  }
};

struct AggQueue{
  AggStack in,out;

  void push(int x){
    in.push(x);
  }

  void pop(){
    if(out.st.empty()){
      while(!in.st.empty()){
        int v = in.st.top().first;
        in.pop();
        out.push(v);
      }
    }

    out.pop();
  }

  int query() const{
    if(in.st.empty()) return out.agg();
    if(out.st.empty()) return in.agg();

    return min(in.agg(),out.agg());
  }
};


vector<int>slideMin(const vector<int>&a,int K){
  int n = a.size();
  vector<int>ans;
  AggQueue minQuery;

  for(int i=0;i<K;i++){
    minQuery.push(a[i]);
  }

  ans.push_back(minQuery.query());

  for(int i=K;i<n;i++){
    minQuery.push(a[i]);
    minQuery.pop();
    ans.push_back(minQuery.query());
  }
}

