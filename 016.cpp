#include<iostream>
#include<string>
using namespace std;
string trangrade(string grade)
{
     if(grade == "A")
     return "ดีเลิศ" ;
     else if(grade == "B")
     return "ดี" ;
     else if(grade == "C")
     return "ปานกลาง" ;
     else if(grade == "D")
     return "แย่" ;
     else if(grade == "F")
     return "แย่มาก" ;
     else
     return "ไม่ใช่เกรด" ;
}
int main()
{
     string rwgpa ; 
     cout << "ใส่เกรดที่คุณได้ (A , B , C , D , F) : " ;
     cin >> rwgpa ;
     string tragpa = trangrade(rwgpa);
     cout <<"ความหมายคือ : "<< tragpa ;
}