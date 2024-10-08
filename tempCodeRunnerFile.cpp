#include <iostream>
using namespace std;

int main() {
    int a[3] = {5, 20, 10};

    int total=0;
    for(int i=0; i<3; i++){
        total += a[i];
    }
    cout << total << endl;

}