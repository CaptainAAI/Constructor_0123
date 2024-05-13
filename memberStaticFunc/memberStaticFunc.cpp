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



