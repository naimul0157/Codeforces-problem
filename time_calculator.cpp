#include<iostream>
using namespace std;

int main() {
    float sleep, wake_up;
    float total_sleep;
    cout<<"Give me your sleep time:";
    cin>>sleep;
    cout<<"Give me your wake up time:";
    cin>>wake_up;
    total_sleep=wake_up-sleep;
    cout<<"Your total sleep time:"<<total_sleep<<"Hour";
    return 0;
}