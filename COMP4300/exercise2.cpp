#include<bits/stdc++.h>

using namespace std;

void pp(int &a){
    cout<<&a<<' '<<a<<' '<<sizeof(a)<<'\n';
}

class IntArray
{
    int *m_arr;
    size_t m_size;

public:
    IntArray(size_t input_number):
    m_size(input_number),
    m_arr(new int[input_number]())
    {
        cout<<"Array Construction"<<endl;
    }

    ~IntArray()
    {
        delete [] m_arr;
        cout<<"Array Destruction"<<endl;
    }

    int get(size_t index) const
    {
        return m_arr[index];
    }

    void set(size_t index,int val){
        m_arr[index]=val;
    }

    void print() const{
        for(size_t i=0;i<m_size;i++){
            cout<<i<<' '<<m_arr[i]<<endl;
        }
    }
};


int main(){
    IntArray arr(10);
    arr.print();
}
