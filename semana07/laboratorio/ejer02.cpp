#include <iostream>
#include <random>
using namespace std;
int main(){
    int array_multi[4][4];
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            array_multi[i][j] = rand() % 100;
        }
        
    }
    
    return 0;
}