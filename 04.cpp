#include<iostream>
using namespace std;
int main()
{
    int n ;
    cout<<"จำนวนค่าที่ต้องการ : ";
    cin>>n;
    float all = 0 ;
    float dat[n] ;
    for(int num = 0 ; num < n ; ++num)
    {
        cout<<"ค่าที่ "<<num+1<<" : ";
        cin>>dat[num];
        all += dat[num] ;
    }
    int max = dat[0];
    int min = dat[0];
    for(int num = 1 ; num < n ; num++)
    {
        if(dat[num] > max)
        {
            max = dat[num];
        }
    }
    for(int num = 1 ; num < n ; num++)
    {
        if(dat[num] < min)
        {
            min = dat[num];
        }
    }
    cout<< "ค่าnี่มากที่สุดคือ : " << max <<endl<< "ค่าnี่น้อยที่สุดคือ : " << min << endl << "ค่าเฉลี่ยคือ : " << all/n << endl ;
}