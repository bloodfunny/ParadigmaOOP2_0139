#include <iostream>
using namespace std;

class seseorang {
public:
    virtual void pesan() = 0;

};

class joko :public seseorang {
public:

};


int main()
{
    std::cout << "Hello World!\n";
}

