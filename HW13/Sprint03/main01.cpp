#include <iostream>
#include <Windows.h>
#include <vector>
using namespace std;
int main() {
    srand((unsigned)time(NULL));

    int NI = 30, NO = 30, ni, no;
    ni = rand() % NI;
    no = rand() % NO;

    cout << "ni = " << ni << endl;
    cout << "no = " << no << endl;

    int  n = 2, capacity = 15, lost = 0;
    vector <int> quene;
    // push
    if (capacity < quene.size() + ni) {
        lost += quene.size() + ni - capacity;
        ni = capacity - quene.size();
    }
    cout << "lost = " << lost << endl;

    for (int i = 0; i < ni; i++) {
        quene.push_back(rand() % 20);
        cout << quene.size() << " " << quene[quene.size() - 1] << endl;
    }

    cout << "\nout\n";
    for (int i = 0; i < no; i++) {
        if (quene.size() != 0) {
            cout << quene[0] << "\n";
            quene.erase(quene.begin());
        }
        else break;
    }
}
