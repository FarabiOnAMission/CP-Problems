#include<stack>

using namespace std;

struct myQueue{
  stack<int> in,out;

  //push a new element to the stack
  void push(int x){
    in.push(x);
  }

  //pop a element from the stack
  void pop(){
    if(out.empty()){
      while(!in.empty()){
        out.push(in.top());
        in.pop();
      }
    }
    out.pop();
  }

  //return oldest element
  int front(){
    if(out.empty()){
      while(!in.empty()){
        out.push(in.top());
        in.pop();
      }
    }

    return out.top();
  }
  
};