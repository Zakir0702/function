#include<iostream>
using namespace std;
float circle_Area(float r) {
    float area=3.14*r*r;
    return area;
}
int main() {
    float r;
    cout<<"enter a radius:";
    cin>>r;
    float area=circle_Area(r);
    cout<<"area of circle is:"<<area<<endl;
}