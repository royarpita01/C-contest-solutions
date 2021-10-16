#include <bits/stdc++.h>
using namespace std;

int main()
{
    stack<int> Front,Rear;
    int q;
    cin >> q;
    while(q--)
    {
        int type, n;
        cin >> type;
        if(type == 1)
        {
            cin >> n;
            Rear.push(n);
        }
        else
        {
           if(Front.empty())
           {
               while(!Rear.empty())
               {
                   Front.push(Rear.top());
                   Rear.pop();
               }
            }
           if(!Front.empty())
           {
               if(type == 2) Front.pop();
               if(type == 3) cout << Front.top() << endl;
           }
        }
    }
    return 0;
}
