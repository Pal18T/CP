#include <bits/stdc++.h>
using namespace std;

// int sum(int a, int b){
//     int add = a+b;
//     return add;

// }

// int digit_sum(int n){
//     int sum = 0;
//     while(n){
//         sum = sum + n%10;
//         n = n/10;

//     }
//     return sum;
// }


//int main(){

    //digit sum (eg: 12345 = 15)

    // int n;
    // cin>>n;
    // int digit_sum = 0;
    // while(n){
    //     digit_sum = digit_sum + n%10;
    //     n=n/10;
    // }
    // cout<<digit_sum;

    //sum of two digit sum  eg.123 123 == 12

//     int a,b;
//     cin>>a>>b;
//     cout<<digit_sum(a)+digit_sum(b);

// }

// Pass by value , pass by reference (andpercent(&))

// void increment(int &n, int n1){
//     n++;
//     n1++;
    

// }
// int main(){
//     int a = 3;
//     int b = 6;
//     cout<<a<<" "<<b<<endl;
//     increment(a,b);
//     cout<<a<<" "<<b<<endl;;
    

// }

//eg. swapping two numbers

// int swap(int &a, int &b){
//     int temp = a;
//     a = b;
//     b = temp;
// }
// int main(){
//     int a = 4, b=8;
//     cout<<a<<" "<<b<<endl;
//     swap(a,b);
//     cout<<a<<" "<<b<<endl;
// }