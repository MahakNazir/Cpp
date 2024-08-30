#include<bits/stdc++.h>
using namespace std;
double Pow(int x, int n){
    double ans = 1.0;
    long long nn = n;
    if(nn < 0) nn = nn * -1;    // negative power
    while(nn){              // till nn = 0
        if(nn % 2){
            ans = ans * x;
            nn = nn - 1;
        }
        else{
            x = x * x;
            nn = nn / 2;
        }
    }
    if(  n < 0) ans = (double) (1.0) / (double) (ans);  //puts negative powers to 1/ans form
    return ans;
}
int main() {
  cout << Pow(2, 10) << endl;
}