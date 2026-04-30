#include<iostream>
using namespace std;
int main()
{
    int n ;
    cout<<"ใส่จำนวนที่ต้องการเรียง : ";
    cin>>n;
    float dat[n];
    for(int in = 0 ; in < n ; in++)
    {
        cout<<"จำนวนที่ "<< in + 1 << " = " ;
        cin>>dat[in];
    }
    for(int co = 0 ; co < n-1 ; co++)
    {
        for(int row = 0 ; row < n-1 ;  row ++)
        {
            int box = dat[row] ;
            if( dat[row] < dat[row+1] )
            {
                dat[row] = dat[row+1];
                dat[row+1] = box ;
            }
        }
    }
    for(int ou = 0 ; ou < n ; ou++)
    {
        cout<<dat[ou]<<" ";
    }
}