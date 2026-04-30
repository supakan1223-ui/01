#include<iostream>
using namespace std;
void swapnumber(int &a , int &b)
{
    int box = a ;
    a = b ;
    b = box ;
}
int main()
{
    int x , y;
    cout << "ใส่ค่า x : ";
    cin >> x ;
    cout << "ใส่ค่า y : ";
    cin >> y;
    cout << "ค่าก่อนสลับ" << endl <<"x = " << x <<" "<< "y = " << y  << endl ;
    swapnumber(x,y);
    cout << "ค่าหลังสลับ" << endl <<"x = " << x <<" "<< "y = " << y  << endl ;
}