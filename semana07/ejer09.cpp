#include <iostream>
#include <ctime>
using namespace std;

int sumar(int a,int b,int c,int &resp){
    //int resp;
    resp=a+b+c;
    return resp;
}
void mostrar(int a,int b, int c,int resp){
    cout<<"La suma de: "<<a<<" + "<<b<<" + "<<c<<" = "<<resp;
}
int aleatorio(int min,int max){
    return rand()%(max-min+1)+min;
}

int main()
{
    srand(time(NULL));
    int a, b, c, resp;
    a=aleatorio(0,10);
    b=aleatorio(0,10);
    c=aleatorio(0,10);
    sumar(a,b,c,resp);//resp=
    mostrar(a,b,c,resp);
    return 0;
}