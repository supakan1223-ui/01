#include<iostream>
using namespace std;
int main()
{
    int n ;
    cout << "ใส่จำนวนที่ต้องการให้แสดงผลฺ : ";
    cin >> n ;
    float dat[n];
    for(int in = 0 ; in < n ; in++)
    {
        cin >> dat[in] ;
    }
    for(int in = 0 ; in < n ; in++)
    {
        cout<< dat[in]<<" " ;
    }
}