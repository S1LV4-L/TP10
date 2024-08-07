#include <iostream>
#include <vector>
#include <string>
#include <math.h>
#include <algorithm>
using namespace std;

class rectangulo
{
	private:
		double base;
		double altura;
	public:
		rectangulo(double base, double altura) : base(base), altura(altura) {}
		
		double getBase() const { return base; }
		double getAltura() const { return altura; }
};

int main()
{
	vector<rectangulo> a;
	double base, altura;
	int numr;
	
	cout<<"Ingrese el numero de rectangulos: ";
    cin>>numr;
    cout<<endl;
    
    for (int i=0; i<numr; i++)
	{
        cout<<"Ingrese la base del rectangulo: ";
        cin>>base;
        cout<<"Ingrese la altura del rectangulo: ";
        cin>>altura;
        a.push_back(rectangulo(base, altura));
        cout<<endl;
	}
	
	for (int i=0; i<a.size(); i++)
    {
    	cout<<"Rectangulo "<<i+1<<endl;
        cout<<"Area: "<<a[i].getBase()*a[i].getAltura()<<endl;
		cout<<"Perimetro: "<<2*(a[i].getBase()+a[i].getAltura())<<endl;
		cout<<endl;
    }
    
    return 0;
}
