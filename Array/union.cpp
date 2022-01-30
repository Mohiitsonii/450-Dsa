#include <iostream>
using namespace std;
int main()
{

    // cout<<"hello";
    int a[] = {1, 2, 3, 4, 5};
    int b[] = {1, 2, 3, 7};

    int m = sizeof(a) / sizeof(a[0]);
    int n = sizeof(b) / sizeof(b[0]);
    int c[m + n];

    int i = 0, j = 0;
    while (i < m && i < n)
    {
        if (a[i] < b[j])
        {
            cout<<a[i];
            i++;
        }
        else if (a[i] < b[j])
        {
           cout<<b[i];
            j++;
        }
         else if (a[i] < b[j])
        {
            cout<<a[i];
            j++;
            i++;
        }
    }
    return 0;
}