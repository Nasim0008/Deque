#include<bits/stdc++.h>
using namespace std;
int main()
{
    deque<int>de;
    int n;
    cin>>n;
    int arr[n+3];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        if(i&1)
        {
            de.push_back(arr[i]);
        }
        else
        {
            de.push_front(arr[i]);
        }
    }
    for(auto u:de)
    {
        cout<<u<< " ";
    }
    cout<<endl;
    de.pop_front();
    de.pop_back();
    for(auto u:de)
    {
        cout<<u<<" ";
    }
    cout<<endl;
}