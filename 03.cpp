#include<iostream>
using namespace std;
int main()
{
    int row ;
    cout<<"Enter Odd Number : ";
    cin>>row ;
    while(row % 2 == 0)
    {
        cout<<"Just Odd Number:";
        cin>>row;
    }
    for(int co = 1 ; co <= row ; ++co)
    {
        int down = (row-co)+1;
        for(int space = 1; space <= (down-1)*2; ++space)
        cout<<" ";
        for(int numu = 1; numu <= co ; ++numu)
        {
            cout<<numu<<" ";
        }
        for(int numu = co-1; numu >= 1 ; --numu)
        {
            cout<<numu<<" ";
        }
        cout<<endl;
    }
    for(int co = row ; co >= 1 ; --co)
    {
        int down = (row-co)+2;
        for(int space = 1; space <= (down-1)*2; ++space)
        cout<<" ";
        for(int numu = 1; numu <= co-1 ; ++numu)
        {
            cout<<numu<<" ";
        }
        for(int numu = co-2; numu >= 1 ; --numu)
        {
            cout<<numu<<" ";
        }
        cout<<endl;
    }
}