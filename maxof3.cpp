#include<iostream>
using namespace std;
int printMAx(int a,int b, int c) {
    int maximum= max(max(a,b),c);
    return maximum;
}
int main() {
    int ans =printMAx(2,4,7);
    cout<<"maximum is :"<<ans <<endl;
}