#include<iostream>
using namespace std;
int main()
{
    int a[] = {1,5,2,4, 6};
    int n = sizeof(a)/sizeof(a[0]);
    int m = a[0];
    int larg;
    for(int i=0; i<n; i++)
    {
        if(m < a[i])
        {
            larg = m;
            m = a[i];
        }
        else if(larg<a[i] && a[i]<m)
        {
            larg = a[i];
        }
    }
    cout<<larg<<" "<<"it is second largest number"<<"\n";
}