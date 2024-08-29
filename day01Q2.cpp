#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int n, s = 0;

    for(int i = 1; i <= 5; i++){
        cout << " Enter grade " << i << ": ";
        cin >> n;
        s += n;
    }
    double avg = s/5.0;

    cout << "The average grade is: ";
    cout << fixed << setprecision(1) << avg;
}
