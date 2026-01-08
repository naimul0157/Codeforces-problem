#include<iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    int count=0, detect=0;
    string s;
    cin>>s;
   for(char c: s){
    if (c=='A')
    {
        count++;
    }
    else{
        detect++;
    }
    
   }
    if (count>detect)
    {
        cout<<"Anton";
    }
    else if(count<detect){
        cout<<"Danik";
    }
    else{
        cout<<"Friendship";
    }
    
    return 0;
}