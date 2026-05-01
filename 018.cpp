#include<iostream>
#include<ctime>
#include<cstdlib>
#include<string>
using namespace std;
string tranin(int in )
{
    if(in == 1)
    return "ค้อน" ;
    else if(in == 2)
    return "กรรไกร" ;
    else if(in == 3)
    return "กระดาษ" ;
    else
    return "แค่ 1 - 3 " ;
}
string tranbot(int in )
{
    if(in == 1)
    return "ค้อน" ;
    else if(in == 2)
    return "กรรไกร" ;
    else if(in == 3)
    return "กระดาษ" ;
    else
    return "แค่ 1 - 3 " ;
}
void process( int in , int ranbot , int &score , int &scorebot )
{
    if( in == 1 && ranbot == 2)
    {
        score ++ ;
    }
    else if( in == 1 && ranbot == 3)
    {
        scorebot ++ ;
    }
    else if( in == 2 && ranbot == 1)
    {
        scorebot ++ ;
    }
    else if( in == 2 && ranbot == 3)
    {
        score ++ ;
    }
    else if( in == 3 && ranbot == 1)
    {
        score ++ ;
    }
    else if( in == 3 && ranbot == 2)
    {
        scorebot ++ ;
    }
}
int main()
{
    cout<<"ขอตัอนรับสู่เกมเป่ายิงฉุบ"<<endl<<"กฏคือต้องชนะให้ได้ 3 แต้ม"<<endl<<"[ 1 = ค้อน : 2 = กรรไกร : 3 = กระดาษ ]"<<endl ;
    int pwin = 0 ;
    int bwin = 0 ;
    int in ;
    while( pwin < 3 && bwin < 3)
    {
        srand(time(0)) ;
        int ranbot = rand() % 3 + 1 ;
        cout << "ใส่เลข (1,2,3) : " ;
        cin >> in ;
        string tranp = tranin(in) ;
        string tranb = tranbot(ranbot) ;
        cout << "-----------------------------------"<<endl ;
        cout << "คุณออก : " <<  tranp <<  " | " << "โปรแกรมออก : " << tranb << endl ;
        process(in , ranbot, pwin , bwin ) ;
        cout <<"คะแนนตอนนี้ คุณ : "<< pwin << " / โปรแกรม : " << bwin << endl;
        cout << "-----------------------------------"<<endl ;
    }
    cout << endl ;
    if(pwin == 3)
    cout << "คุณชนะ โดยคะแนนคือ : "<< pwin << " ต่อ " << bwin << endl;
    else
    cout << "คุณแพ้ โดยคะแนนคือ : "<< pwin << " ต่อ " << bwin << endl;

}