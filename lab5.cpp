#include <iostream>
#include <iomanip>
using namespace std;

int main () 
{
    double n, m, f;

    cout << "Enter n: ";
    cin >> n;

    cout << "Enter m: ";
    cin >> m;

    f = (n+m) * ((n+1) / (m+1) + 5 / m);
    
    cout << fixed << setprecision(3);
    cout << "f(" << n << "," << m << ") = " << f << endl;
    
    return 0;
}



    #include <iostream>
    #include <iomanip>

    double n, m, f; 

    cin >> n;
    cin >> m;