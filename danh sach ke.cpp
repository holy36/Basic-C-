#include<queue>
#include<iostream>
using namespace std; 
int main() 
{ 
    std::queue <int> q;
    q.push(1);
    
 
    while (!q.empty()) 
    { 
        cout << '\t' << q.front(); 
        q.pop(); 
    } 
    cout << '\n';
    return 0;
}
