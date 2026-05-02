#include<iostream>
#include<vector>
using namespace std;
int main()
{
    cout << "------เวคเตอร์ 01------" <<endl;
    vector<int> box ;
    int n ;
    while(true)
    {
        cout << "ใส่ค่า พิมพ์ -1 เพื่อหยุด : " ;
        cin >> n;
        if ( n == -1 )
        break ;
        else
        box.push_back(n);
    }
    cout<<"คุณใส่ตัวเลขมาทั้งหมด "<<box.size()<<" ตัว "<<endl;
    for(int out = 0 ; out < box.size() ; out++)
    {
        cout << box[out] << " ";
    }
}