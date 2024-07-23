#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int ans=0;
    int i = 0;
    while (n!=0){
        int bit = n&1;
        ans = (bit * pow(10 , i)) +ans;
        n = n>>1;
        i++;

    }
    cout<<"Answer is "<<ans<<endl;
}


//note when dealing with bit level we use '&' for removing last bit and for shifting we use right shift'>>'
//For digit or decimal level we use modulus for removing last digit and '/' for right shifing for changing n value


// int main(){
//     int n;
//     cin>>n;
//     int ans=0;
//     int i = 0;
//     while (n!=0){
//         int bit = n%10;
//         if (bit==1){
//             ans+= pow(2,i);
//         }
//         n = n/10;
//         i++;

//     }
//     cout<<"Answer is "<<ans<<endl;
// }