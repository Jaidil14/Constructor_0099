#include <iostream>
#include <string>
using namespace std;

class Angka
{
private:
    int *arr;
    int panjang;

public:
    Angka(int); // Constructor
    ~Angka(); // Destructor
    void cetakData();
    void isiData();
};

// Definisi member Function
Angka::Angka(int i) // Constructor
{
    panjang = i;
    arr = new int[i];
    isiData();
}

Angka::~Angka() //Destructor
{
    cout << endl;
    cetakData();
    delete[]arr;
    cout << "Alamat array sudah dilepaskan." << endl;
}

void Angka::cetakData()
{
    for(int i = 1; i < panjang; i++)
    {
        cout << i << " = " << arr[i] << endl;
    }
}

void Angka::isiData()
{
    for(int i = 1; i < panjang; i++)
    {
        cout << i << " = " << arr[i] << endl;
    }
}

int main()
{
    Angka belajarcpp(3); // Constructor dipanggil
    Angka *ptrBelajarcpp = new angka(5); // Constructor dipanggil
    delete ptrBelajarcpp; // Destructor dipanggil

    return 0;
}