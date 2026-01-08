#include<iostream>
#include<cstring>
using namespace std;

int main() {
    string name;
    cin >> name;
    
    int cntL = 0, cntU = 0;
    for(auto ele : name){
        if(islower(ele)) cntL++;
        else cntU++;
    }

    if(cntL == cntU || cntL > cntU) {
        for(auto & ele : name) ele = tolower(ele);
    } else if(cntL < cntU) for(auto & ele : name) ele = toupper(ele);
    cout << name;
    return 0;
}