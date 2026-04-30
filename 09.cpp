#include<iostream>
using namespace std;
int main()
{
    cout << "โปรแกรมตรวจสอบ Palindrome "<<endl<<endl<<"** หมายเหตุ : Palindrome คือ คำที่สะกดจากหน้าไปหลัง หรือหลังมาหน้า ก็ได้คำเดิมเป๊ะๆ เช่น radar, madam, level, racecar **"<<endl ;
    cout<<endl;
    string dat ;
    cout<<"ใส่คำภาษาอังกฤษที่ต้องการตรวจสอบ = ";
    cin >> dat ;
    int n = dat.length();
    bool x = true ;
    for(int out = 0 ; out < n ; out ++)
    {
        int first = dat[ out ] ;
        int last = dat[n - 1 - out] ; /*ตอนแรกใส่แค่ n - out สมมุติ = 5 first จะเป็น 0 last จะเป็น 5 ซึ่งมันไม่ได้ มัน แค่ 0 1 2 3 4 มันเริ่มท่ 0  ไ่ม่มี 5 เลยต้อง n - 1 - out */
        if( first != last)
        {
            x = false ;
            break ;
        }
    }
    cout<<endl;
    if( x == true) //ไอสัสต้อง == เท่ากับตัวเดียวไม่ได้
    cout<<" เป็น Palindrome " ;
    else
    cout<<" ไม่เป็น Palindrome ";
}