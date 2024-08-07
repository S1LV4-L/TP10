#include <iostream>
#include <vector>
#include <string>
#include <math.h>
#include <algorithm>
using namespace std;

class persona
{
	private:
		string nombre;
		int edad;
	public:
		persona(string nombre, int edad) : nombre(nombre), edad(edad) {}
		
		string getNombre() const { return nombre; }
		int getEdad() const { return edad; }
};

void ordenar(vector<persona> &a)
{
    for (int i = 1; i < a.size(); ++i) 
    {
        persona key = a[i];
        int j = i - 1;

        while (j >= 0 && a[j].getEdad() > key.getEdad()) 
        {
            a[j + 1] = a[j];
            j = j - 1;
        }
        a[j + 1] = key;
    }
}

int main()
{
	vector<persona> a;
	string nombre;
	int edad, nump;
	
	cout<<"Ingrese el numero de personas: ";
    cin>>nump;
    cin.ignore();
    cout<<endl;
    
    for (int i=0; i<nump; i++)
	{
        cout<<"Ingrese el nombre de la persona: ";
        getline(cin, nombre);
        cout<<"Ingrese la edad de la persona: ";
        cin>>edad;
        cin.ignore();
        a.push_back(persona(nombre, edad));
        cout<<endl;
	}

    ordenar(a);
	
	for (int i=0; i<a.size(); i++)
    {
        cout<<"Nombre: "<<a[i].getNombre() <<endl;
		cout<<"Edad: "<<a[i].getEdad() <<endl;
		cout<<endl;
    }
    
    return 0;
}
