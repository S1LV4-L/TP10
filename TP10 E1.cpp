#include <iostream>
#include <vector>
#include <string>
#include <math.h>
using namespace std;

class Alumno
{
	private:
		string nombre;
		double nota1, nota2, nota3;
	public:
		Alumno(string nombre, double nota1, double nota2, double nota3)
            : nombre(nombre), nota1(nota1), nota2(nota2), nota3(nota3) {}
		
		string getNombre() const { return nombre; }
        double getNota1() const { return nota1; }
        double getNota2() const { return nota2; }
        double getNota3() const { return nota3; }
};

int main()
{
	vector<Alumno> a;
	string nombre;
    double nota1, nota2, nota3;
    int numAlumnos;
    
    cout << "Ingrese el numero de alumnos: ";
    cin >> numAlumnos;
    cin.ignore();
    cout<<endl;
    
    for (int i = 0; i < numAlumnos; i++)
	{
        cout<<"Ingrese el nombre del alumno: ";
        getline(cin, nombre);
        cout<<"Ingrese la nota 1 del alumno: ";
        cin>>nota1;
        cout<<"Ingrese la nota 2 del alumno: ";
        cin>>nota2;
        cout<<"Ingrese la nota 3 del alumno: ";
        cin>>nota3;
        cin.ignore();
        a.push_back(Alumno(nombre, nota1, nota2, nota3));
        cout<<endl;
	}
	
	 for (int i=0; i<a.size(); i++)
    {
        cout<<"Nombre: "<<a[i].getNombre()<<endl;
		cout<<"Nota 1: "<< a[i].getNota1()<<endl;
		cout<<"Nota 2: "<<a[i].getNota2()<<endl;
		cout<<"Nota 3: "<<a[i].getNota3()<<endl;
		cout<<endl;
    }
	
    return 0;
}
