#include<iostream>
using namespace std;

int main() {
    string n;
    cin>>n; 
    int count=0;
    int lenght=n.length();
    for (int i = 0; i < lenght; i++)
    {
        if (n[i] =='7' || n[i] =='4')
        {
           count++;
        }
        
    }
    if (count==4 || count ==7)
    {
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    
    return 0;
}