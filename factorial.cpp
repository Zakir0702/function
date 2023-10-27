#include<iostream>
using namespace std;
int fact(int n) {
    int fact=1;
    for(int i=0;i<=n;i++) {
        fact=fact*i;
    }
    return fact;
}
int main() {
    int n;
    cout<<"enter a number";
    cin>>n;
    int ans =fact(n);
    cout<<"factorial is"<< n <<ans << endl;
}