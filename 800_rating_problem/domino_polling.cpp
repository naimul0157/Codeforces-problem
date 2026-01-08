#include<iostream>
using namespace std;

int main() {
    int m, n;  //take the input m, n; which can be defined by m x n
    cin>>m>>n;
    int mul=m*n;
    int final;
    int max;
    if (mul%2==1)           //if m*n=odd number then delete last number
    {
        final=mul-1;
    }
    else{
        final=mul;
    }
    max=mul/2;          //to find the maximum domino tilling diagram max=(m*n)/2;
    cout<<max;
    return 0;
}