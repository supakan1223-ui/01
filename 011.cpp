#include<iostream>
using namespace std ;
int findmax (int a, int b)
{
    if( a > b)
    {
        return a ;
    }
    else
    {
        return b ;
    }
}
int main()
{
    int a , b ;
    cout << "ใส่ค่าที่ 1 : " ;
    cin >> a ;
    cout << "ใส่ค่าที่ 2 : " ;
    cin >> b ;
    int c =  findmax( a , b) ;
    cout <<"ค่าที่มากที่สุดคือ : "<< c ;
}