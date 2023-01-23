#include<bits/stdc++.h>
using namespace std;
int main()
{
   deque<int>de1{1,3,5,7,9};
   deque<int>de2{2,4,6,8};
   swap(de1,de2);
   for(auto u:de1)
   {
    cout<< u<< " ";
   }
   cout<<endl;
   for(auto u:de2)
   {
    cout<<u<< " ";
   }
   cout<<endl;
   
  
}