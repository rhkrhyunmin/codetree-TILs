#include <iostream>
#include <string>

using namespace std;

class Boob
{
private:
    string code;
    char color;
    int second;

public:
    Boob(string code, char color, int second)
    {
        this->code = code;
        this->color = color;
        this->second = second;
    }

    string getCode() const { return code; }
    char getColor() const { return color; }
    int getSecond() const { return second; }
};

int main() {
    string _code;
    char _color;
    int _second;

    cin >> _code >> _color >> _second;

    Boob boob(_code, _color, _second);
    cout << "code : " << boob.getCode() << endl;
    cout << "color : " << boob.getColor() << endl;
    cout << "second : " << boob.getSecond() << endl;
    
    return 0;
}