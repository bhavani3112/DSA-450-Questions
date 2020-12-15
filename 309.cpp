#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t-- > 0)
    {
        int n;
        cin >> n;
        char a[n];

        for (int i = 0; i < n; i++)
            cin >> a[i];

        queue<char> q;
        map<char, int> m;

        for (char c : a)
            m[c] = 0;

        for (char c : a)
        {
            m[c]++;
            q.push(c);

            while (!q.empty())
            {
                if (m[q.front()] > 1)
                    q.pop();
                else
                {
                    cout << q.front() << " ";
                     break;
                }
            }
            if (q.empty())
                cout << -1 << " ";
        }
        cout << endl;
    }
    return 0;
}
	
