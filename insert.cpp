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

    deque<int>::iterator it,it2;
    for(auto it=de.begin();it!=de.end();it++)
    {
        cout<< *it<< " ";
    }
    cout<<endl;
    //insert at begin()
    it = de.begin();
    de.insert(it,100);
    for(auto it=de.begin();it!=de.end();it++)
    {
        cout<< *it<< " ";
    }
    cout<<endl;
    //insert at any position
    it2=de.begin()+4;
    de.insert(it2,200);
    for(auto it=de.begin();it!=de.end();it++)
    {
        cout<< *it<< " ";
    }
    cout<<endl;
    //insert any value of multiple times
    de.insert(it2,3,400);
    for(auto it=de.begin();it!=de.end();it++)
    {
        cout<< *it<< " ";
    }
}