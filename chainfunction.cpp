#include <iostream>
#include <string>
using namespace std;

class buku
{
public:
    string judul;

    buku setJudul(string judul)
    {
        this->judul = judul;
        return *this; // Chain function
    }
    
    string getJudul()
    {
        return this->judul;
    }
} bukunya;

int main()
{
    // bukunya.setJudul("Matematika");
    // Cout << bukunya.getJudul();

    cout << bukunya.setJudul("Matematika").getJudul(); // Chain function calls

    return 0;
}