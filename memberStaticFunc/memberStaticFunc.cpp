#include<iostream>
using namespace std;

class mahasiswa
{
private:
	static long long int nim;
public:
	long long int id;
	string nama;

	void setID();
	void printAll();

	static void setNim(long long int pNim) { nim = pNim; }
	static long long int getNim() { return nim; }

	mahasiswa(string pnama)
	{
		nama = pnama;
		setID();
	}
};

long long int mahasiswa::nim = 20230140122;

void mahasiswa::setID()
{
	id = ++nim;
}

void mahasiswa::printAll()
{
	cout << "ID  = " << id << endl;
	cout << "Nama = " << nama << endl;
	cout << endl;
}

int main()
{
	mahasiswa mhs1("Ananda Agung Ismail");
	mahasiswa mhs2("Alexander Agung");
	mahasiswa::setNim(9);//mengakses nim melalui static member function "setNim"
	mahasiswa mhs3("Captain AAI");
	mahasiswa mhs4("anonymous");

	mhs1.printAll();
	mhs2.printAll();
	mhs3.printAll();
	mhs4.printAll();

	cout << "akses dari luar object = " << mahasiswa::getNim() << endl;
}




