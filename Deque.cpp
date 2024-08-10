#include<bits/stdc++.h>
using namespace std;
int main()
{
    deque<int>de;
    cout<< "Enter the size of the deque : ";
    int n;
    cin>>n;
    cout<< "Enter the front element : ";;
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        de.push_front(a);
    }

    cout<< "Enter the back element: ";
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        de.push_back(a);
    }

    cout<< "Element of the deque: ";
    for(auto u:de)
    {
        cout<<u<< " ";
    }
    cout<<endl;

    cout<< "size of the deque : "<<de.size()<<endl;
    cout<< "First element of the deque : "<<de.front()<<endl;
    cout<< "last element of the deque : "<<de.back()<<endl;

    de.pop_front();
    cout<< "After deleting the first element, Now the first element is : "<<de.front()<<endl;

    de.pop_back();
    cout<< "After deleting the last element, Now the last element is : "<<de.back()<<endl;

    cout<< "Now all element of deque: ";
    for(int i=0;i<de.size();i++)
    {
        cout<<de[i]<< " ";
    }
    cout<<endl;

    deque<int>:: iterator p,q;
    p = de.begin()+2;
    de.insert(p,10);
    cout<< "After inserting the element in the 3rd position: ";
    for(auto u:de)
    {
        cout<<u<< " ";
    }
    cout<<endl;

    q=de.begin()+1;
    de.insert(q,5,80);
    cout<< "After inserting 5 times 80 in the 6th position: ";
    for(auto u:de)
    {
        cout<< u<< " ";
    }
    cout<<endl;


    deque<int>:: iterator it,a,b;
    it = de.begin()+4;
    de.erase(it);
    cout<< "After deleting the 5th number element from the deqeu: ";
    for(auto u:de)
    {
        cout<<u<< " ";
    }
    cout<<endl;
    a = de.begin()+2;
    b = de.begin()+5;
    de.erase(a,b);
    cout<< "after deleting from 3rd to 6th number element: ";
    for(auto u:de)
    {
        cout<<u<< " ";
    }
    cout<<endl;

    reverse(de.begin(),de.end());
    cout<< "After reverse the deque: ";
    for(auto u:de)
    {
        cout<<u<< " ";
    }
    cout<<endl;


    sort(de.begin(),de.end());
    cout<< "After ascending sort the deque: ";
    for(auto u:de)
    {
        cout<<u<< " ";
    }
    cout<<endl;

    sort(de.rbegin(),de.rend());
    cout<< "After descending sort the deque: ";
    for(auto u:de)
    {
        cout<<u<< " ";
    }
    cout<<endl;

    de.clear();

    if(de.empty())
    {
        cout<< "Deque is empty"<<endl;
    }
    else
    {
        cout<< "No"<<endl;
    }


}
