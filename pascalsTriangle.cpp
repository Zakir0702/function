#include<iostream>
using namespace std;
int fact(int x) {
    int f=1;
    for(int i=1;i<=x;i++) {
        f=f*i;
    }
    return f;
}
int ncr(int n,int r){
    return fact(n)/(fact(r)*fact(n-r));
     
}
int main() {
    int row,col,n;
    cout<< "enter a no. :";
    cin>> n;
    for(row=0;row<n;row++) {
        // pyramid like structure
        for(col=0;col<n-row-1;col++) {
            cout<< "  ";
        }
        for(col=0;col<row+1;col++) {
            cout<<ncr(row,col)<<"   ";
        }
        cout<<endl;
    }
}