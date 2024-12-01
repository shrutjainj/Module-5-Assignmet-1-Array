#include<iostream>
using namespace std;
int main()
{
    int m = 800;
    int a[10] = {6243,45,3,6,3,235,84,3,8,7};
    int n = sizeof(a)/sizeof(a[0]);
    for(int i=0; i<n; i++)
    {
        if(m>a[i])
        {
            m = a[i];
        }
    }
    cout<<m;
}