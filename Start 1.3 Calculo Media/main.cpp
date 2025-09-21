#include <iostream>

using namespace std;

int main()
{
    int notas, num, soma=0;
    float media;
    cout << "Quantas Notas deseja informar ?" << endl;
    cin>> notas;
    if(notas<=0){
        cout<<"Numero Invalido Tente novamente"<<endl;
        return 0;
    }
        for(int i=1; i<= notas; i++)
        {
            cout<<"Digite A "<<i<<" nota"<< endl;
            cin>>num;
            soma= soma +num;
        }
    media =soma / notas;
    if(media>=7)
    {
        cout<<" Aprovado "<<endl;

    } else if(media>=5)
    {
        cout<<" Recuperacao "<<endl;

    } else
    {
        cout<<" Reprovado "<<endl;

    }
    return 0;
}
