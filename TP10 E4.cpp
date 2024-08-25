#include <iostream>
#include <vector>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <algorithm>
using namespace std;

class CuentaBancaria
{
	private:
		int cuentaid;
		double saldo;
		string titular;
	public:
		CuentaBancaria(int cuentaid, double saldo, string titular) : cuentaid(cuentaid), saldo(saldo), titular(titular) {}
		
		int getCuentaid() const { return cuentaid; }
		double getSaldo() const { return saldo; }
		string getTitular() const { return titular; }
		
		void setSaldo(double saldo2)
		{
			saldo=saldo2;
		}
};

int main()
{
	vector<CuentaBancaria> a;
	int id, cont, selector;
	double saldo;
	string n;
	bool yn=true;         //bool de decision
	
	cout<<"Ingrese el numero de cuentas bancarias: ";
	cin>>cont;
	cout<<endl;
	
	for (int i=0; i<cont; i++)
	{
        cout<<"Ingrese el numero de la cuenta: ";
        cin>>id;
        cout<<"Ingrese el nombre del titular: ";
        cin>>n;
        saldo=0;
        a.push_back(CuentaBancaria(id, saldo, n));
        cout<<endl;
	}
	
	do
	{
		cout<<"Desea modificar el saldo de una cuenta?"<<endl;
		cout<<"1. Si"<<endl;
		cout<<"2. No"<<endl;
		cin>>selector;
		switch(selector)
		{
			case(1): yn=true;
			break;
			case(2): yn=false;
			break;
			default: yn=false;
			break;
		}
		selector=0;
		if(yn==true)
		{
			int selector2;
			cout<<"Seleccione una cuenta: "<<endl;
			for (int i=0; i<a.size(); i++) 
			{
				cout<<""<<i<<". "<<a[i].getCuentaid()<<endl;
			}
            cin>>selector;
            cout<<endl;
            cout<<"Seleccione '1' para hacer un deposito"<<endl;
            cout<<"Seleccione '2' para hacer un retiro"<<endl;
            cin>>selector2;
            
            switch(selector2)
            {
            	case(1):
            		{
            			cout<<"Ingrese el saldo a depositar: ";
            			cin>>saldo;
            			a[selector].setSaldo(saldo);
					}
				break;
				case(2):
					{
						cout<<"Ingrese el saldo a retirar: ";
						cin>>saldo;
						if(saldo>0) saldo=saldo*-1;
						a[selector].setSaldo(saldo);
					}
				break;
				default: cout<<"Error.";
			}
		}
		
	}while(yn==true);
	
	cout<<endl;
	for (int i=0; i<a.size(); i++)
    {
        cout<<"ID (numero de la cuenta): "<<a[i].getCuentaid()<<endl;
		cout<<"Titular: "<<a[i].getTitular()<<endl;
		cout<<"Saldo: "<<a[i].getSaldo()<<endl;
		cout<<endl;
    }
	
	return 0;
}
