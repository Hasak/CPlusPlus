#include <ctime>
#include <iostream>
using namespace std;
int main()
{
    time_t result = time(0);
    cout << asctime(localtime(&result))<< result << " seconds since the Epoch\n";
}
