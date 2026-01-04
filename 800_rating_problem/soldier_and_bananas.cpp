#include<iostream>
using namespace std;

int main() {
    int k, n, w;
    int cost=0;
    int total_cost;
    int borrow=0;
    cin>>k>>n>>w;
    for (int i = 1; i <= w; i++)
    {
        cost +=(i*k);
    }
    
    if(cost > n) cout << cost-n;
    else cout << 0 << endl;
    return 0;
}