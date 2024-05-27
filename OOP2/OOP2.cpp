#include <iostream>
using namespace std;

class seseorang {
public:
    virtual void pesan() = 0;

};

class joko :public seseorang {
public:
    void pesan() {
        cout << "Pesan darijoko" << endl;
    }
};

class lia :public seseorang {
    void pesan() {
        cout << "Pesan dari lia" << endl;
    }
};


int main()
{
    seseorang* obyek;
    joko a;
    lia b;

    obyek = &a;
    obyek->pesan();
    obyek = &b;
    obyek->pesan();
    //a. seseorang::pesan();
    return 0;
}

