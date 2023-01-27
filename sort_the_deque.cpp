#include<bits/stdc++.h>
using namespace std;
int main()
{
    deque<int>de;
    de.push_back(78);
    de.push_front(8);
    de.push_back(7);
    de.push_back(25);
    de.push_front(7);
    de.push_back(89);
    de.push_back(4);

    for(auto u:de)
    {
        cout<<u<< " ";
    }
    cout<<endl;


    sort(de.begin(),de.end());
    for(auto u:de)
    {
        cout<<u<< " ";
    }
    cout<<endl;


    sort(de.rbegin(),de.rend());
    for(auto u:de)
    {
        cout<<u<< " ";
    }
    cout<<endl;



}