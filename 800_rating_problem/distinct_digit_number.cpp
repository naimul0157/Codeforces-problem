#include<iostream>
using namespace std;

int main() {
    int a=4;
    string n[a];
    cin>>n[a];
    string result;
    for (int i = 1; i <=100; i++)
    {
        for (int j = 1; j <=100; j++)
        {
            result=n[a]+i;
            if (result=='2013')
            {
                break;
            }
            

            cout<<result<<endl;
        }
    }
        
     return 0;   
    }