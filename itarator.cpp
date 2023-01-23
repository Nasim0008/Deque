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

    deque<int>::iterator it;
    for(auto it=de.begin();it!=de.end();it++)
    {
        cout<< *it<< " ";
    }
    cout<<endl;
    it = de.begin();
    cout<<*it<<endl;
    it=de.begin()+2;
    cout<<*it<<endl;

}