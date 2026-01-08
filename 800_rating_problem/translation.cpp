#include<iostream>
#include<algorithm>
using namespace std;

int main() {
    string s;
    string t;
    string result;
    cin>>s;
    cin>>t;
    reverse(s.begin(), s.end());
    if (s==t)
    {
        cout<<"YES";

    }
    else{
        cout<<"NO";
    }
    
    return 0;
}