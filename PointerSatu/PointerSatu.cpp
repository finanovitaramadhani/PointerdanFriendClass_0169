// PointerSatu.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

class mahasiswa {
public:
	int nim;
	void showNim() {
		cout << " No Induk = " << nim << endl;

	}
};


int main()
{
	mahasiswa mhs{ 1 }; // Object mhs
	mhs.showNim(); // member Access Operator

	mahasiswa& refmhs = mhs; //Pointer reference refmhs
	refmhs.nim = 2; // member Access operator
	mhs.showNim();

	mahasiswa* pMhs = &mhs; //pointer deferences pmhs
	pMhs->nim = 3; // Arrow Operator
	pMhs->showNim();
	return 0;
}



