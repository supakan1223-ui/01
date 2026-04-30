#include<iostream>
using namespace std;
void printTable(int tar)
{   
    for(int one = 1 ; one <= 12 ; one++)
    {
        cout << tar << " x " << one <<" = "<< tar * one<<endl;
    }
}
int main()
{
    int tar ;
    cout << "ใส่เลขที่ต้องการเปลี่ยนเป็นสูตรคูณ : " ;
    cin >> tar;
    printTable(tar);
}