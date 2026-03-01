#include <iostream>
#include <string>

class Robot_Pemadam {
private:
    int jarak;
    std::string status;
public:
    void inputSensor(int inputJarak);
    void prosesLogika();
    void cetakStatus();
};

void Robot_Pemadam::inputSensor(int inputJarak) {
    jarak = inputJarak;
}

void Robot_Pemadam::prosesLogika() {
    if (jarak > 20) {
        status = "Maju Mencari Api";
    }
    else if (jarak <= 20 && jarak > 5) {
        status = "UDAH DEKET NIH BRAY";
    }
    else if (jarak <= 5) {
        status = "Posisi Tepat! gas semprot kali ya!";
    }
}

void Robot_Pemadam::cetakStatus() {
    std::cout << "[Sensor: " << jarak << " cm] -> Action [" << status << "]\n\n";
}

int main() {
    Robot_Pemadam myrobotdamkargweh;
    int angkaInput;
    std::cout << "Masukkan jarak (ketik 67 untuk berhenti): ";
    std::cin >> angkaInput;

    while (angkaInput != 67) {
        myrobotdamkargweh.inputSensor(angkaInput);
        myrobotdamkargweh.prosesLogika();
        myrobotdamkargweh.cetakStatus();
        std::cout << "Masukkan jarak (ketik 67 untuk berhenti): ";
        std::cin >> angkaInput;
    }
    return 0;
}