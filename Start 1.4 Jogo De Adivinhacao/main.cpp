#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;



int main()
{

    srand(time(0));
    int tentativa=0, i=0, numeroSecreto = rand() % 100 + 1; // de 1 a 100
    cout << "Jogo De Adivinhacao Digite um Numero dente 1 a 100 \n So acaba quando acertar \n Boa Sorte :) " << endl;

    while(tentativa!=numeroSecreto) // Loop para so acabar quando a pessoa acertar
    {
        cout<<" Digite um numero "<<endl;
        cin>>tentativa;
        if(tentativa>100 || tentativa <1){
            cout<<"Esse Numero ao vale !!!! \n tem que ser entre 1 e 100 e vai contar como tentativa, fica esperto em "<<endl;
        } else if(tentativa<numeroSecreto){
            cout<<"Aumenta esse Numero ai"<<endl;
        } else if(tentativa>numeroSecreto)
        {
            cout<<"Diminui esse numero campeao";
        }
     i++;
    }

    cout<<" Muito bem o numero secreto e "<< numeroSecreto<<"\n Seu numero de tentativas foi "<< i<<endl;
    return 0;
}
