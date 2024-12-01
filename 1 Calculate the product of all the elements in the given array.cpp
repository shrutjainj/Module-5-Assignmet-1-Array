#include<iostream>
using namespace std;
int main()
{
    int a[] = {1,2,8,5,7};
    int n = sizeof(a)/sizeof(a[0]);
    int b = 1;
    for(int i=0; i<n; i++)
    {
        b=b*a[i];
    }
    cout<<b;
    return 0;
}