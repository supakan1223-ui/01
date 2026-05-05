#include<iostream>
#include<string>
#include<ctime>
#include<cstdlib>
using namespace std ;
struct game
{
    string name ;
    int hp ;
    int clss ;
    int attack ;
};
string chec(int input , int target)
{
    if (input < target )
    return "น้อยไป! ลองทายให้มากขึ้นหน่อย" ;
    else if (input > target )
    return "มากไป! ลองทายให้น้อยลงหน่อย" ;
    else 
    return "ไม่ใช่ละ" ;
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
string tran(int in )
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
void entclass(game &p , int clas , int fighter [2] , int archer[2] , int tank[2] )
{
    if(p.clss == 1 )
    {
        p.hp = fighter[0] ;
        p.attack = fighter[1] ;
    }
    else if (p.clss == 2 )
    {
        p.hp = archer[0] ;
        p.attack = archer[1] ;
    }
    else if (p.clss == 3 )
    {
        p.hp = tank[0] ;
        p.attack = tank[1] ;
    }
    else
    {
        p.hp = fighter[0] ;
        p.attack = fighter[1] ;
        p.clss = 1 ;
    }
}
void uppoint(game &p , int round , int fighter [2] , int archer [2] , int tank [2] , int clased)
{
    int roundup = (10 - round) * 2 ;
    if(clased == 1)
    {
        fighter[0] += roundup ;
        fighter[1] += roundup ;
        p.hp = fighter[0] ;
        p.attack = fighter[1] ;
    }
    else if(clased == 2)
    {
        archer[0] += roundup ;
        archer[1] += roundup ;
        p.hp = archer[0] ;
        p.attack = archer[1] ;
    }
    else if(clased == 3)
    {
        tank[0] += roundup ;
        tank[1] += roundup ;
        p.hp = tank[0] ;
        p.attack = tank[1] ;
    }
}
int  main()
{
    game p1 , p2;
    int fighter[2] = {100 , 50} ;
    int archer[2] = {70 , 90} ;
    int tank[2] = {170 , 20} ;
    int fighter2[2] = {100 , 50} ;
    int archer2[2] = {70 , 90} ;
    int tank2[2] = {170 , 20} ;
    int pwin = 0 ;
    int bwin = 0 ;
    int pwin2 = 0 ;
    int bwin2 = 0 ;
    int in ;
    int minigame ;
    int p2minigame ;
    int roundp1 = 0 ;
    int roundp2 = 0 ;
    srand(time(0)) ;
    int input ;
    cout << "------- สร้างนักสู้คนที่ 1 --------" << endl ;
    cout << "ใส่ชื่อตัวละครที่ 1: " ;
    cin >> p1.name ;
    cout << "เลือกอาชีพ โดยพิมเลข[ 1 = นักสู้ | 2 = นักธนู | 3 = นักป้องกัน : " ;
    cin >> p1.clss ;
    entclass(p1 , p1.clss , fighter , archer , tank) ;
    cout <<  "จำนวนเลือดของ " << p1.name << " ก่อนอัพพลัง : "<< p1.hp << endl << "ค่าการโจมตีของ "<< p1.name << " ก่อนอัพพลัง : " << p1.attack << endl  ;
    cout << "--------มินิเกมฝึกตัวละคร---------"<< endl << "****โดย จำนวนรอบที่คุณใช้ในการเล่น มีผลต่อค่าพลัง ยิ่งใช้มากค่าพลังจะบวกน้อย ยิ่งใช้น้อยค่าพลังจะบวกมาก****"<< endl << "เลือกมินิเกม [1 = เกมเป่ายิงฉุบ | 2 = เกมทายเลข ] : " ;
    cin >> minigame ;
    if(minigame == 1 )
    {
        cout<<"-------ขอตัอนรับสู่เกมเป่ายิงฉุบ--------"<<endl<<"กฏคือต้องชนะให้ได้ 3 แต้ม"<<endl<<"[ 1 = ค้อน : 2 = กรรไกร : 3 = กระดาษ ]"<<endl ;
        while( pwin < 3 && bwin < 3)
        {
        int ranmini1 = rand() % 3 + 1 ;
        cout << "ใส่เลข (1,2,3) : " ;
        cin >> in ;
        roundp1 += 1 ;
        string tranp = tran(in) ;
        string tranb = tran(ranmini1) ;
        cout << "คุณออก : " <<  tranp <<  " | " << "โปรแกรมออก : " << tranb << endl ;
        process(in , ranmini1, pwin , bwin ) ;
        cout <<"คะแนนตอนนี้ คุณ : "<< pwin << " / โปรแกรม : " << bwin << endl;
        cout << "-----------------------------------"<<endl ;
        }
    }
    else if(minigame == 2)
    {
        cout << "--------ขอต้อนรับสู่เกมทายเลข----------" << endl << "กติกา ให้ผู้เล่นใส่เลขมา 1 เลข ที่คิดว่าถูกต้อง โปรแกรมจะบอกว่าน้อยกว่าหรือมากกว่า เลขเป้าหมาย" << endl;
        int numtar = rand() % 100 + 1 ;
        while(true)
    {
        cout << "ทายตัวเลขมา : ";
        cin >> input  ;
        if (input > 100)
        {
            cout << "แค่ 1 - 100" << endl ;
            roundp1 += 1 ;
        }
        else if(input != numtar)
        {
            string proc = chec(input , numtar);
            cout << proc << endl ;
            roundp1 += 1 ;
        }
        else
        {
            cout << "ถูกต้อง " << " ใช้ทั้งหมด " << roundp1 << " รอบ "<< endl ;
            break ;
        }
    }
    if (input != numtar )
    {
        cout << "พลาดแล้ว " << " ใช้ทั้งหมด " << roundp1 << " รอบ "<< endl ;
        roundp1 += 1 ;
    }
    }
    else
    cout  << "---------- ไม่ตรงตามเงื่อนไข ไม่ได้รับการฝึก ----------" ;
    uppoint(p1,roundp1, fighter , archer , tank , p1.clss ) ;
    cout <<  "จำนวนเลือดของ "<< p1.name << " หลังอัพพลัง : " << p1.hp << "    +" << (10 - roundp1) * 2 << endl << "ค่าการโจมตีของ "<< p1.name << " หลังอัพพลัง : " << p1.attack << "    +" << (10 - roundp1) * 2 << endl ;
    cout << "----------------------------" << endl ;
    cout << "----------------------------" << endl ;
    cout << "------- สร้างนักสู้คนที่ 2 --------" << endl ;
    cout << "ใส่ชื่อตัวละครที่ 2 : " ;
    cin >> p2.name ;
    cout << "เลือกอาชีพ โดยพิมเลข[ 1 = นักสู้ | 2 = นักธนู | 3 = นักป้องกัน : " ;
    cin >> p2.clss ;
    entclass(p2 , p2.clss , fighter2 , archer2 , tank2) ;
    cout <<  "จำนวนเลือดของ"<< p2.name << "ก่อนอัพพลัง : " << p2.hp << endl << "ค่าการโจมตีของ "<< p2.name << "ก่อนอัพพลัง : " << p2.attack << endl ;
    cout << "--------มินิเกมฝึกตัวละคร---------"<< endl << "****โดย จำนวนรอบที่คุณใช้ในการเล่น มีผลต่อค่าพลัง ยิ่งใช้มากค่าพลังจะบวกน้อย ยิ่งใช้น้อยค่าพลังจะบวกมาก****"<< endl  << "เลือกมินิเกม [1 = เกมเป่ายิงฉุบ | 2 = เกมทายเลข ] : " ;
    cin >> p2minigame ;
    if(p2minigame == 1 )
    {
        cout<<"-------ขอตัอนรับสู่เกมเป่ายิงฉุบ--------"<<endl<<"กฏคือต้องชนะให้ได้ 3 แต้ม"<<endl<<"[ 1 = ค้อน : 2 = กรรไกร : 3 = กระดาษ ]"<<endl ;
        while( pwin2 < 3 && bwin2 < 3)
        {
        int ranmini1 = rand() % 3 + 1 ;
        cout << "ใส่เลข (1,2,3) : " ;
        cin >> in ;
        roundp2 += 1 ;
        string tranp = tran(in) ;
        string tranb = tran(ranmini1) ;
        cout << "คุณออก : " <<  tranp <<  " | " << "โปรแกรมออก : " << tranb << endl ;
        process(in , ranmini1, pwin2 , bwin2 ) ;
        cout <<"คะแนนตอนนี้ คุณ : "<< pwin2 << " / โปรแกรม : " << bwin2 << endl;
        cout << "-----------------------------------"<<endl ;
        }
    }
    else if(p2minigame == 2)
    {
        cout << "--------ขอต้อนรับสู่เกมทายเลข--------" << endl << "กติกา ให้ผู้เล่นใส่เลขมา 1 เลข ที่คิดว่าถูกต้อง โปรแกรมจะบอกว่าน้อยกว่าหรือมากกว่า เลขเป้าหมาย" << endl;
        int numtar = rand() % 100 + 1 ;
        while(true)
    {
        cout << "ทายตัวเลขมา : ";
        cin >> input  ;
        if (input > 100)
        {
            cout << "แค่ 1 - 100" << endl ;
            roundp2 += 1 ;
        }
        else if(input != numtar)
        {
            string proc = chec(input , numtar);
            cout << proc << endl ;
            roundp2 += 1 ;
        }
        else
        {
            cout << "ถูกต้อง " << " ใช้ทั้งหมด " << roundp2 << " รอบ "<< endl ;
            break ;
        }
    }
    if (input != numtar )
    {
        cout << "พลาดแล้ว " << " ใช้ทั้งหมด " << roundp2 << " รอบ " << endl ;
        roundp2 += 1 ;
    }
    }
    else
    cout  << "---------- ไม่ตรงตามเงื่อนไข ไม่ได้รับการฝึก ----------" ;
    uppoint(p2,roundp2, fighter2 , archer2 , tank2 , p2.clss ) ;
    cout <<  "จำนวนเลือดของ " << p2.name << " หลังอัพพลัง : " << p2.hp << "    +" << (10 - roundp2) * 2 << endl << "ค่าการโจมตีของ "<< p2.name << " หลังอัพพลัง : " << p2.attack << "    +" << (10 - roundp2) * 2 << endl ;
    cout << "------------------------------------" << endl ;
    cout << "------------------------------------" << endl ;
    int whilen = 0;
    while(p1.hp >= 0 && p2.hp >= 0)
    {
        p1.hp -= p2.attack ;
        p2.hp -= p1.attack ;
        whilen += 1 ;
        cout << "------ท้งสองได้โจมตีใส่กันครั้งที่ "  << whilen << " --------"<< endl << "เลือด "<< p1.name << " เหลือ : " << p1.hp << endl << "เลือด "<< p2.name << " เหลือ : " << p2.hp << endl ;
    }
    if( p1.hp > p2.hp )
    cout << " ---------ยินดีด้วย " << p1.name << " ชนะ -------- " ;
    else if( p1.hp < p2.hp )
    cout << " ---------ยินดีด้วย " << p2.name << " ชนะ -------- " ;
    else if( p1.hp == p2.hp )
    cout << " --------- เสมอ -------- " ;
    cout << endl << "---------------------------------------" << endl ;
    cout << "---------------------------------------" << endl ;
}
