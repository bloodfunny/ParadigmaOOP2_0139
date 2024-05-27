#include <iostream>
using namespace std;

class abstracktIklas {
private: string x, y;

public:
    //method untuk mengisi nilai
    // private member
    void setXY(string a, string b) {
        x = a;
        y = b;
    }

};

int main()
{
    std::cout << "Hello World!\n";
}
