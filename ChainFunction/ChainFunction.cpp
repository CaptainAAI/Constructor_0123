#include<iostream>
#include<string>
using namespace std;

class buku {
	string judul;

public:
	buku setJudul(string judul)
	{
		this->judul = judul;
		return *this;
	}
	string getJudul()
	{
		return this->judul;
	}

} bukunya ;

int main()
{
	// bukunya.setJudul("Matamatika");
	// cout << bukunya.getJudul();
	cout << bukunya.setJudul("Matematika").getJudul();//chain function calls
	return 0;
}