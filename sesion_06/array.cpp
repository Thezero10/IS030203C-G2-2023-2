#include <iostream>
using namespace std;
int main(){
    int numbers[5];
    int auxiliary;
    for (int i = 0; i < 5; i++)
    {
        numbers[i] = i + 1;
    }
    int numbers2[] = {1,2,3,4,5};
    int auxiliary = numbers[0];
    numbers[0] = numbers[4];
    numbers[4] = auxiliary;
    cout<<numbers[4];

    for (int i = 0; i < 5; i++)
    {
        cout<<numbers2[i];
    }
    
    return 0;
}