// Inplementation of Stack using Vectors and stm
#include <iostream>
#include <vector>
using namespace std;

class Stack{
    vector<int> v;
    
    public:
    void push(int val){
        v.push_back(val);
    }
    void pop(){
        v.pop_back();
    }
    
    int top(){
        return v[v.size() - 1];
    }
    
    bool Empty(){
        if(v.size() == 0){
            return true;
        }
        else{
            return false;
        }
    }
};

int main(){
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    cout << s.top() << endl;
}





