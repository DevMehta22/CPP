#include <iostream>
using namespace std;

int main()
{
    char chr = 'h';
    try
    {
        cout << "Data recieved successfully" << endl;
        cout << "Parsing data" << endl;
        throw chr;
    }
    catch (int x)
    {
        cout << "Integer exception handled/n";
    }
    catch (...)
    {
        cout << "Something went wrong";
    }
    return 0;
}