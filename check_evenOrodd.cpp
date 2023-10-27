#include<iostream>
using namespace std;
bool check_Even(int n) {
    if(/*n%2==0*/  (n&1)==0) {
        return true;
    }
    else{
        return false;
    }
}
int main () {
        int n;
        cout<<"enter a number:";
        cin>>n;
        bool isEven=check_Even(n);
        if(isEven) {
            cout<<n<<"is  even number"<<endl;
        }
        else{
            cout<<"is  odd number "<<endl;
        }
    }