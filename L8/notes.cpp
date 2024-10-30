//switch case

#include<iostream>
using namespace std;

int main(){
    int amount;
    int rem=0,hundred=0,f=0,t=0,ten=0;
    cout<<"Enter the amount for calculating no. of 100's , 50's , 20's and 10's notes"<<endl;
    cin>>amount;
    switch (1) {
        case 1 : hundred = amount/100;
            amount = amount - (hundred*100);
        case 2 : f = amount/50;
            amount = amount - (f*50);
        case 3 : t = amount/20;
            amount = amount - (t*20);
        case 4 : ten = amount/10;
            amount = amount - (ten*100);
            break;
        default: cout<<"Invalid input"<<endl;
    }
    cout<<"Hundreds:"<<hundred<<endl;
    cout<<"Fifty:"<<f<<endl;
    cout<<"Twenty:"<<t<<endl;
    cout<<"Ten:"<<ten<<endl;
}