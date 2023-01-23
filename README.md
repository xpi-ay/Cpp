# C++

C++ è un software di scrittura ad alto livello, serve per creare file .exe che svolgono determinati problemi. Si possono prendere dei dati in input e vengono elaborati dando un output. 

## Installation

E' possibile scaricare c++ dal seguente sito: https://aka.ms/vs/17/release/vc_redist.x64.exe

```bash
--------------------------------------------------------------------------------------------------------------------------------
```

## Uso

```cpp
#include <iostream>
using namespace std;
int main()
{
//Possiamo dichiarare delle variabili.   
int a=0;
double b=0; 
double somma=0;
//int si usa per dichiarare una variabile intera, double invece, si usa per dichiarare una variabile decimale.
//Ovviamente esistono altri tipi di variabili tipo bool (variabile booleana che serve per rendere vera o falsa una condizione).

cout<<"inserisci un numero intero"<<endl;
cin>>a;
//Con questa operazione chiediamo all'utente un dato (in questo caso intero) che verra poi sommato al secondo numero.
//Abbiamo quindi impostato che la variabile "a" ha un valore impostato dall'utente.
cout<<"inserisci un numero decimale"<<endl;
cin>>b;
//richiesta del secondo numero all'utente

somma=a+b;
// Con questa operazione facciamo la somma dei 2 numeri e la salviamo nella variabile somma.

cout<<somma<<endl;
//Con questa operazione mostriamo all'utente il risultato della somma dei 2 numeri.


return 0;
//Questo comando serve a far terminare l'esecuzione del file .exe alla macchina 
}
```

