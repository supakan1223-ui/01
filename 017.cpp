#include<iostream>
#include<cstdlib>
#include<ctime>
#include<string>
using namespace std ;
string chec(int input , int target)
{
    if (input < target )
    return "น้อยไป! ลองทายให้มากขึ้นหน่อย" ;
    else if (input > target )
    return "มากไป! ลองทายให้น้อยลงหน่อย" ;
    else 
    return "ไม่ใช่ละ" ;
}
int main()
{
    srand(time(0)) ;
    int numtar = rand() % 100 + 1 ;
    cout << "ขอต้อนรับสู่เกมทายเลข" << endl << "กติกา ให้ผู้เล่นใส่เลขมา 1 เลข ที่คิดว่าถูกต้อง มีโอกาส 5 ครั้ง โปรแกรมจะบอกว่าน้อยกว่าหรือมากกว่า เลขเป้าหมาย" << endl; 
    int input ;
    int round = 0 ;
    while(true)
    {
        cout << "ทายตัวเลขมา : ";
        cin >> input  ;
        if (input > 100)
        {
            cout << "แค่ 1 - 100" << endl ;
            round += 1 ;
        }
        else if(input != numtar)
        {
            string proc = chec(input , numtar);
            cout << proc << endl ;
            round += 1 ;
        }
        else
        {
            cout << "ถูกต้อง" << endl ;
            cout <<"ทายไปจำนวน "<< round + 1 <<" รอบ";
            break ;
        }
    }
    /* if (input != numtar )
    {
        cout << "พลาดแล้ว";
        round += 1 ;
    }*/
}