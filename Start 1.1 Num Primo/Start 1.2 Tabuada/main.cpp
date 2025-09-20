#include <iostream>

using namespace std;

int main()
{   int num=0,mult;
    cout << "Digite um numero" << endl;
    cin>>num;

    cout<<"Agora Digite qual numero de multiplicações deseja? "<<endl;
    cin>>mult;
    if(mult<=0|| num<=0)
    {
        cout<<"nenhum dos numeros digitados pode ser 0 ou abaixo de 0";
        return 0;
    }

    for (int i=1;i<=mult; i++)
    {
        cout<<i<<" x "<<num << " = "<<num*i<<endl;
    }
    return 0;
}
