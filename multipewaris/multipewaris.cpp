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


int main()
{
    std::cout << "Hello World!\n";
}

