#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    deque<int>de;
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        if(a>5)
        {
            de.push_back(a);
        }
        else
        {
            de.push_front(a);
        }
    }
    for(auto u:de)
    {
        cout<<u<<" ";
    }
    cout<<endl;
    cout<< de.front()<<endl;
    cout<<de.back()<<endl;
    cout<<de.at(2)<<endl;
}