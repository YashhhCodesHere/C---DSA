#include <bits/stdc++.h>
using namespace std;

class Queue{
    deque<int> dq;
public:
    void push(int val){
        dq.push_back(val);
    }

    void pop(){
        dq.pop_front();
    }

    int front(){
        return dq.front();
    }

    bool empty(){
        return dq.empty();
    }

};

int main(){
    Queue q;

    return 0;
}