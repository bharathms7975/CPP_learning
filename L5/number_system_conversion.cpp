// //binary to decimal
// #include<iostream>
// #include <math.h>
// using namespace std;

// int main(){
//     int output=0;
//     int n;
//     cin>>n;
//     for (int i=0; n>0; i++){
//         output += (pow(2,i)*(n%10));
//         n/=10;
//     }
//     cout<<output<<endl;
// }


//decimal to binary

#include<iostream>
#include <math.h>
using namespace std;

int main(){
    int output=1;
    int n;
    cin>>n;
    for (int i=0; n>0; i++){
        output += (pow(10,i)*(n%2));
        n/=2;
    }
    cout<<output<<endl;
}
