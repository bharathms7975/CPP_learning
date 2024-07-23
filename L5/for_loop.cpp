//for loop

#include<iostream>
using namespace std;

int main(){
    // int n;
    // cout<<" Enter the value of N"<<endl;
    // cin>>n;

    // cout<<"printing count from 1 to n"<<endl;

    for (int i=0; i<=15; i+=2){
        cout<<i<<" ";

        if(i&1){
            continue;
        }
        i++;
    }
}