#include<iostream>
using namespace std;

int main() {
    int e;
    cin>>e;
    int step=e/5;
    if (e%5!=0)
    {
        cout<<step+1;
    }
    else
    cout<<step;
    return 0;
}