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
    while(de.size())
    {
        cout<<de.front()<< " ";
        de.pop_back();
    }
    cout << endl;
    de.clear();
    cout << de.size();
}