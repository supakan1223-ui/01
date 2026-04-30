#include<iostream>
using namespace std;
int main()
{
    int n ;
    cout << "ใส่จำนวนที่ต้องการใส่ : ";
    cin >> n ;
    int dat[n] ;
    for(int num = 0 ; num < n ; num++)
    {
        cout << "ค่าที่ "<< num+1 <<" = " ;
        cin >> dat[num] ;
    }
    cout<<"เลขคู่โดยเรียงลำดับจากมากน้อยไปหามาก  : " ;
    for(int row = 0 ; row < n ; row ++)
    {
        if(dat[row] % 2 == 0)
        {  
        for(int co = 0 ; co < n-1 ; co ++)
        {
            for(int bub = 0 ; bub < n-1 ;  bub ++)
            {
                int box = dat[bub] ;
                if( dat[bub] > dat[bub+1] )
                {
                    dat[bub] = dat[bub+1];
                    dat[bub+1] = box ;
                }
            }
        }
        cout<<dat[row]<<" ";
        }
    }
    cout<<endl<<"เลขคี่โดยเรียงลำดับจากมากน้อยไปหามาก : " ;
    for(int row = 0 ; row < n ; row ++)
    {
        if(dat[row] % 2 != 0)
        {  
        for(int co = 0 ; co < n-1 ; co ++)
        {
            for(int bub = 0 ; bub < n-1 ;  bub ++)
            {
                int box = dat[bub] ;
                if( dat[bub] > dat[bub+1] )
                {
                    dat[bub] = dat[bub+1];
                    dat[bub+1] = box ;
                }
            }
        }
        cout<<dat[row]<<" ";
        }
    }
}