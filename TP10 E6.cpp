#include <iostream>
#include <vector>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <algorithm>
using namespace std;

class libro
{
	private:
		string titulo, autor;
		int fecha;
	public:
		libro(string titulo, string autor, int fecha) : titulo(titulo), autor(autor), fecha(fecha) {}
		
		string getTitulo() const { return titulo; }
		string getAutor() const { return autor; }
		int getFecha() const { return fecha; }
};

int main()
{
	string titulo, autor;
	int fecha, numr;
	
	cout<<"Ingrese la cantidad de libros: ";
	cin>>numr;
	cin.ignore();
	cout<<endl;
	
	vector<libro> a;
	a.reserve(numr);
	
	for (int i=0; i<numr; i++)
	{
        cout<<"Ingrese el titulo del libro: ";
        getline(cin, titulo);
        cout<<"Ingrese el autor del libro: ";
        getline(cin, autor);
        cout<<"Ingrese la fecha de publicacion del libro: ";
        cin>>fecha;
        cin.ignore();
        a.emplace_back(titulo, autor, fecha);
        cout<<endl;
	}
	
	sort(a.begin(), a.end(), [](const libro& a, const libro& b)
	{
        return a.getFecha() < b.getFecha();
    });
	
	for (int i=0; i<a.size(); i++)
    {
    	cout<<"Libro "<<i+1<<endl;
        cout<<"Titulo: "<<a[i].getTitulo()<<endl;
		cout<<"Autor: "<<a[i].getAutor()<<endl;
		cout<<"Fecha de publicacion: "<<a[i].getFecha()<<endl;
		cout<<endl;
    }
	
	return 0;
}
