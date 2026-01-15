#include <cmath>
#include <cstdio>
#include <iostream>
using namespace std;


int main() {
    int a ;
    cin>>a;
    char d[a];
    
    for (int i = 0; i<a; i++) {
    cin>>d[i];
    }
        for (int i = a-1; i>=0; i--) {
    cout<<d[i]<<" ";
    }
      
      
    return 0;
}
