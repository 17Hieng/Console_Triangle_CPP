#include <iostream>
using namespace std;

int main()
{   
    int n,u;
    cout << "Please enter max width of triangle\n";//Ask max width from user
    cin >> n;
    for (int i = 1; i <= (n * 2 - 1);i++) {//Loop until triangle completed
        if (i < n) {
            u = i;
        }
        else {
            u = n - (i - n);
        }
        for (int j = 1; j <= u;j++) {//Loop until the width of triangle
            cout << "*";
        }
        cout << "\n";
    }
    return 0;
}