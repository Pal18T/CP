#include <bits/stdc++.h>
using namespace std;

// char upper(char c)
// {
//     return 'A' + (c - 'a');    BAAZI capital func using ascii
// }
// int main()
// {
    // pointers

    // int x = 16;
    //  int *p_x = &x;
    // cout<<&x<<endl;
    // cout<<p_x<<endl;
    // cout<<*p_x<<endl;
    // cout<<*p_x+1<<endl;
    // cout<<p_x + 1<<endl;

    // Ques10s
    //  1. CapitalBaazi

    // while (true)
    // {
    //     string s;
    //     cin >> s;
    //     if (s.size() == 0)
    //         break;
    //     for (int i = 0; i < s.size(); ++i)
    //     {
    //         s[i] = upper(s[i]);
    //     }
    //     cout << s << endl;
    // }
    //}


// 2. Sequence


    bool isSequence(int n){
        int res = pow(n,n);
        if(res%10 == 2 || res%10 == 3 || res%10 == 5){
            return "yes";
        }
        else{
            return "No";
        
        }
        return "No";
        
    }
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        cout<<isSequence(n);
    }
}

