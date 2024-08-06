#include<iostream>
using namespace std;
double myPow(double x, int n){
    double ans = 1.0;
    for(int i = 0;i < n; i++){  //runs iterations n times
        ans = ans*x;           //(2,3) = 2*2*2
    }
    return ans;
}
int main()
{
    cout<<myPow(2.0,10)<<endl;
}