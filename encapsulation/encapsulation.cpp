#include <iostream>
using namespace std;

class remoteLampu {
private:
    string saklarNo[10];
public:
    void saklarNo(int i, string value) {
        saklarNo[i] = value;
    }
    string getSaklarNo(int i) {
        return saklarNo[i];
    }
};



int main() {
    remoteLampu LampuRumah;
    
    LampuRumah.getSaklarNo(0, "Lampu teras rumah");
    LampuRumah.getSaklarNo(1, "Lampu ruang tamu;");
    LampuRumah.getSaklarNo(2, "Lampu kamar Tidur");
    LampuRumah.getSaklarNo(3, "Lampu dapur");

    cout << LampuRumah.getSaklarNo(0) << endl;
    cout << LampuRumah.getSaklarNo(1) << endl;
    cout << LampuRumah.getSaklarNo(2) << endl;
    cout << LampuRumah.getSaklarNo(3) << endl;

}

