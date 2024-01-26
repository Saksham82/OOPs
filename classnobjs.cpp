#include <iostream>
using namespace std;

class fruit {
public:
    string name;
    string color;
};

int main(){
    fruit apple;
    apple.name = "green apple";
    apple.color = "green";
    cout << apple.name <<", "<<apple.color <<endl;
    return 0;
}
