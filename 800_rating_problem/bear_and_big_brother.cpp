#include<iostream>
using namespace std;

int main() {
    int a, b;
    cin>>a>>b;
    int l_weight=a;
    int b_weight=b;
    int year=0;
        while(l_weight<=b_weight){
            l_weight=l_weight*3;
            b_weight=b_weight*2;
            year++;
    }
    cout<<year<<endl;
    
    return 0;
}