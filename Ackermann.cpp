#include <iostream>

using namespace std;

int m=0,n=0;

int Ackermann(int, int);

int main(){
    do{
        cout << "Inserte un numero no negativo: ";
    cin >> n;
    }while(n<0);
    do{
        cout << "Inserte un segundo numero no negativo: ";
    cin >> m;
    }while(m<0);
    cout << "El resultado es: " << Ackermann(n,m) << " ";
}

int Ackermann(int m,int n){
    if(m==0){
        return n+1;
    }
    if(m>0 and n==0){
        return Ackermann(m-1,1);
    }
    if(m>0 and n>0){
        return Ackermann(m-1,Ackermann(m,n-1));
    }
}