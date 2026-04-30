#include<iostream>
using namespace std;
int main()
{
    int n , m ;
    cout << "ใส่จำนวนแถว : " ;
    cin >> n ;
    cout << "ใส่จำนวนคอลัมป์ : " ;
    cin >> m ;
    int dat[n][m];
    for(int row = 0 ; row < n ; row ++)
    {
        cout << endl ;
        for(int co = 0 ; co < m ; co ++)
        {
            cout << "ค่าในแถวที่ "<< row+1 <<" , "<< "คอลัมป์ที่ "<< co+1 <<" = " ;
            cin >> dat[row][co];
        }
    }
    for(int row = 0 ; row < m ; row ++)
    {
        cout << endl ;
        for(int co = 0  ; co < n ; co ++)
        {
            cout << dat[co][row] << " ";
        }
}