#include<iostream>
using namespace std ;
void updarr(int arr[] , int n)
{
    for(int koon = 0 ; koon < n ; koon++)
    {
        arr[koon] = arr[koon] * 2 ;
    }
}
int main()
{
    int n ;
    cout << "ใส่จำนวนเลข : "; 
    cin >> n ;
    int dat[n] ;
    for(int num = 0 ; num < n ; num++)
    {
        cout<<"ค่าที่ "<< num + 1 <<" : ";
        cin >> dat[num];
    }
    cout << endl ;
    cout << "ค่าก่อนอัป" << endl ;
    for(int num = 0 ; num < n ; num++)
    {
        cout<<dat[num]<<" " ;
    }
    cout << endl ;
    updarr(dat , n) ;
    cout << "ค่าหลังอัป" << endl ;
    for(int num = 0 ; num < n ; num++)
    {
        cout<<dat[num]<<" " ;
    }
    cout << endl ;
}