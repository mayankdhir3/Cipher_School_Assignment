#include <bits/stdc++.h>
using namespace std;
 
void Patt(int n)
{
    int i = 0, j = 0, k = 0;
    while (i < n) {
    	
        while (k < (n - i - 1)) {
            cout << " ";
            k++;
        }
        k = 0;
        while (j <= i) {
            cout << "*";
            j++;
        }
        j = 0;
        i++;
        cout << endl;
    }
}
int main()
{
    int n = 5;
    Patt(n);
    return 0;
}

