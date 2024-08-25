#include <iostream>
#include <vector>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <algorithm>
using namespace std;

class empleado
{
	private:
		string nombre;
		int salario, departamento;
		
		public:
			empleado(string nombre, int salario, int departamento) : nombre(nombre), salario(salario), departamento(departamento) {}
			
		    string getNombre() const { return nombre; }
		    int getSalario() const { return salario; }
		    int getDepartamento() const { return departamento; }
			 
};

int main()
{
	string name;
	int pay, dept, numr;
	
    cout<<"Ingrese el numero de empleados: ";
    cin>>numr;
    cout<<endl;

    vector<empleado> a;
    a.reserve(numr);
    
    for (int i=0; i<numr; i++)
	{
        cout<<"Ingrese el nombre del empleado: ";
        cin>>name;
        cout<<"Ingrese el salario del empleado: ";
        cin>>pay;
        cout<<"Ingrese el numero de departamento del empleado: ";
        cin>>dept;
        a.push_back(empleado(name, pay, dept));
        cout<<endl;
	}
	
	sort(a.begin(), a.end(), [](const empleado &a, const empleado &b)
	{
        return a.getSalario() > b.getSalario();
    });
	
	for (int i=0; i<a.size(); i++)
    {
    	cout<<"Empleado Nro. "<<i+1<<endl;
        cout<<"Nombre: "<<a[i].getNombre()<<endl;
		cout<<"Salario: "<<a[i].getSalario()<<endl;
		cout<<"Nro. de departamento: "<<a[i].getDepartamento()<<endl;
		cout<<endl;
    }
	
	return 0;
}
