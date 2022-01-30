// all negative numbers to beginning and positive to end with constant extra space

#include <bits/stdc++.h>
using namespace std;
int main()
{
int a[]={1,-2,3,-4,5,-6};
//output  {-2,-4,-6,2,3,6}

int n =6;
int j=0;
for (int i = 0; i <n; i++)
{
    if (a[i]<0)
    {
        swap(a[i],a[j]);
        j++;
    }
    
}


for (int i = 0; i <n; i++)
{
    cout<<a[i];
}

return 0;
}