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
        if(a&1)
        {
            de.push_back(a);
            de.push_front(a-2);
        }
    }
    cout<<de.size()<<endl;
    cout<<de.max_size()<<endl;
}