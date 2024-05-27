#include <iostream>
using namespace std;

class orang {
public:
    int Umur;

    orang(int pUmur) :
        Umur(pUmur)
    {
        cout << "Orang dibuta dengan umur " << Umur << "\n" << endl;
    }
};

class pekerja : public orang {
public:

    pekerja(int pUmur) :
        orang(pUmur)
    {
        cout << "pekerja dibuat\n" << endl;
    }
};



int main()
{
    std::cout << "Hello World!\n";
}

