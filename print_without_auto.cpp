#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    deque<int> de;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        if (a > 5)
        {
            de.push_back(a);
        }
        else
        {
            de.push_front(a);
        }
    }
    for(int i=0;i<de.size();i++)
    {
        cout<<de[i]<< " ";
    }
    cout << endl;
    de.clear();
    cout << de.size();
}