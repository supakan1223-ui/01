#include <iostream>
using namespace std;
int main()
{
    int x;
    cin >>x;
    for(int i = x; i>= 1; --i)
    {
        for(int a = x; a>= i; --a)
        cout<<" "<<" ";
    int n=i;
    for(int j = 1 ; j<=i;  ++j)
    {
        cout<<n<<" ";
        n++;
    }
    n-=2;
    for(int b = i; b>=2 ; --b)
    {
        cout<<n<<" ";
        n--;
    }
    cout<<endl;
    }
    for(int i = 2; i<=x; ++i)
    {
        for(int a = x; a>= i; --a)
        cout<<" "<<" ";
    int n=i;
    for(int j = 1 ; j<=i;  ++j)
    {
        cout<<n<<" ";
        n++;
    }
    n-=2;
    for(int b = i; b>=2 ; --b)
    {
        cout<<n<<" ";
        n--;
    }
    cout<<endl;
    }
}