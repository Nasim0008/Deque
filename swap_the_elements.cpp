#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;cin>>n;
    deque<int>de;
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        de.push_back(a);
    }
    for(auto u:de)
    {
        cout<<u<< " ";
    }
    cout<<endl;
    swap(de.front(),de.back());
    swap(de.at(2),de.at(4));
    for(auto u:de)
    {
        cout<<u<< " ";
    }
    cout<<endl;
}