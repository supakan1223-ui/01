#include<iostream>
using namespace std;
int main()
{
    int row ;
    cin>>row;
    for(int co = 1; co <= row ; ++co)
    {
        int down = (row-co)+1;
        for(int num = 1 ; num <= down ; ++num )
        {
            cout<<num<<" ";
        }
        
        for(int space = 1; space <= (co-1)*2-1 ; ++space)
        cout<<"  ";

        if(row == down)
        {
            for(int fa = down-1 ; fa >= 1; --fa)
            cout<<fa<<" ";
        }
        else
        {
        for(int num = down ; num >= 1; --num)
        {
            cout<<num<<" ";
        }
        }
        cout<<endl;
    }
    for(int co = 2; co <= row ; ++co)
    {
        int down = (row-co)+1;
        for(int num = 1 ; num <= co ; ++num )
        {
            cout<<num<<" ";
        }
        
        for(int space = 1; space <= (down-1)*2-1; ++space)
        cout<<"  ";

        if(co == row )
        {
            for(int fa = co-1 ; fa >= 1; --fa)
            cout<<fa<<" ";
        }
        else
        {
        for(int num = co ; num >= 1; --num)
        {
            cout<<num<<" ";
        }
        }
        cout<<endl;
    }
}