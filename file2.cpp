#include <iostream>
using namespace std;
class persegipanjang
{
    public:
    float panjang;
    float lebar;
    float luas;
    
    void inputData(){
        cout << "input panjang: ";
        cin >> panjang;
        cout << "inputlebar : ";
        cin >> lebar;
    }
    void menghitungLuas(){
        luas = panjang*lebar;
        cout << "luas persegi panjang =" << luas << endl;
    }
    void outputData(){
        cout << "luas persegi panjang =" << luas << endl;
        
    }

};

int main()
{
    persegipanjang per;
    per.inputData();
    per.menghitungLuas();
    per.outputData();
    return 0;
}


