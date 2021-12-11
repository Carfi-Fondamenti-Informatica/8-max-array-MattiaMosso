#include <iostream>
#include "lib.h"
using namespace std;


int main() {
    int a;
    float j;

    cin >>a;
    float n[a];
    for (int i=0; i<a; i++){
        cin >>j;
        n[i]=j;
    }
    cout << max (n,a);
    return 0;
}
