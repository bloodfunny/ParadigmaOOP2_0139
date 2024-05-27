#include <iostream>
using namespace std;

class remoteLampu {
private:
    string saklarno[10];
public:
    void saklarNo(int i, string value) {
        saklarNo[i] = value;
    }
    string getSaklarNo(int i) {
        return saklarNo[i];
    }
};



int main()
{
    std::cout << "Hello World!\n";
}

