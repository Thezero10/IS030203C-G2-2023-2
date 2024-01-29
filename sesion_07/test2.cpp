#include <iostream>
using namespace std;
int main(){
    int v1 = 1, v2=2, a;
    a=v1;
    v1=v2;
    v2=a;
    cout<<v2;
    return 0;
}