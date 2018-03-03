#include <iostream>
using namespace std;
int main(){
    char a[11];
    std::cin >> a;
    if (a[0] == 'a' && a[1] == '\0') cout << -1 << endl;
    else cout << "a" << endl;
}
