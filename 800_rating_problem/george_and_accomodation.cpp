#include<iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    int k, j;
    int count=0;
    for (int i = 0; i < n; i++)
    {
        cin>>k>>j;
        if (j>k && j-k>=2)
        {
            count++;
        }
        
    }
    cout<<count;
    return 0;
}