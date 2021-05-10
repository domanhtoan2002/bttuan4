#include <iostream>
using namespace std;

int main()
{
    int n, maxx=0;
    cin >> n;
    int a[n], b[n+1];
    for (int i=0; i<n; i++)
        cin >> a[i];
    for (int i=0; i<n+1; i++)
    {
        cin >> b[i];
        if (b[i]>maxx) maxx=b[i];
    }
    int m[maxx+1]={0};
    int t[maxx+1]={0};
    for (int i=0; i<maxx+1; i++)
    {
        for (int j=0; j<n; j++)
        {
            if (a[j]==i) m[i]++;
        }
    }
    for (int i=0; i<maxx+1; i++)
    {
        for (int j=0; j<n+1; j++)
        {
            if (b[j]==i) t[i]++;
        }
    }

    for (int i=0; i<maxx+1; i++)
    {
        if (t[i]>m[i])
        {
            cout << i;
            return 0;
        }
    }
}
