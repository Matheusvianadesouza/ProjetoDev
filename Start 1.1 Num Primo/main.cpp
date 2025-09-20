#include <iostream>

using namespace std;

int main()
{   int num=0;
    cout << "Digite um numero" << endl;
    cin>> num;
    if  (num%2==0){
        cout<<"numero e primo";
    }else if(num%3==0) {
    cout<<"numero nao e primo.";}
    else if(num%5==0) {cout<<"numero e primo";}
    else if(num%7==0) {cout<<"numero e primo";}
    else{cout<< "numero nao e primo";}
    return 0;
}
