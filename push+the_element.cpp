#include<bits/stdc++.h>
using namespace std;
int main()
{
    deque<int>de;
    de.push_back(10);
    de.push_front(20);
    de.push_back(54);
    de.push_front(32);
    for(auto u:de)
    {
        cout<<u<<" ";
    }
    cout<<endl;
}