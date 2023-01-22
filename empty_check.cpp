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
    }
    if (de.empty() == true)
    {
        cout << "Nasim" << endl;
    }
    else
    {
        cout << de.size() << endl;
    }
}