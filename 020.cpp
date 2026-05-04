#include<iostream>
#include<string>
#include<vector>
using namespace std;
int Sumfunc(int size , int data[]  )
{
    int Sum = 0 ;
    for(int s = 0 ; s < size ; s++ )
    {
        Sum +=  data[s] ;
    }
    return Sum ; 
}
float Avrfunc(int sum , int size)
{
    float Avr = (float)sum / size ;
    return Avr ;
}
int Maxfunc(int box[] , int size)
{
    int max = box[0] ;
    for(int findmax = 0 ; findmax < size ; findmax++)
    {
        if(max < box[findmax])
        max = box[findmax] ;
    }
    return max ;
}
int Minfunc(int box[] , int size)
{
    int min = box[0] ;
    for(int findmin = 0 ; findmin < size ; findmin++)
    {
        if(min > box[findmin])
        min = box[findmin] ;
    }
    return min ;
}
int main()
{
    cout << "----Vector 02 find Avr ,Max ,Sum----" << endl ;
    vector<int> box ;
    int n ;
    while(true)
    {
        cout << "รับค่า ใส่ -1 เพื่อหยุด : " ;
        cin >> n ;
        if( n == -1 )
        {
            break ;
        }
        else 
        box.push_back(n) ;
    }
    int Sum = Sumfunc(box.size() , box.data() ) ;
    float Avr = Avrfunc(Sum , box.size()) ;
    int Max = Maxfunc(box.data() , box.size());
    int min = Minfunc(box.data() , box.size()) ;
    cout << "ผลรวม = " << Sum << endl << "ค่าเฉลี่ย = " << Avr << endl << "ค่าที่มากที่สุด = " << Max << endl << "ค่าที่น้อยที่สุด = " << min << endl ;
}
