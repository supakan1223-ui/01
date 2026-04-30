#include<iostream>
using namespace std ; 
int calgpa (int grade)
{
    char A = 'A' ;
    char B = 'B' ;
    char C = 'C' ;
    char D = 'D' ;
    char F = 'F' ;
    if( grade >= 80 )
        return A ;
    else if ( grade >= 70)
        return B ;
    else if ( grade >= 60)
        return C ;
    else if ( grade >= 50)
        return D ;
    else
    return F ;
}
char calgpaVerfix (int grade)
{
    if( grade >= 80 )
        return 'A' ;
    else if ( grade >= 70)
        return 'B' ;
    else if ( grade >= 60)
        return 'C' ;
    else if ( grade >= 50)
        return 'D' ;
    else
    return 'F' ;
}
int main()
{
    int rawgrade ;
    cout << "ใส่คะแนนที่ได้ : " ;
    cin >> rawgrade ; 
    char grade = calgpa(rawgrade) ;
    cout <<"เกรดที่ได้ : "<< grade ;
    cout << endl ;
    char gradeFix = calgpaVerfix(rawgrade) ;
    cout <<"เกรดที่ได้แบบแก้โค้ด : "<< gradeFix ;
}