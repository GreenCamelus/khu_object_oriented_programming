#include <iostream>
#include<Windows.h>
#include <vector>
using namespace std;

int main() {
    // rand() 함수 시드 변경
    srand((unsigned)time(NULL));

    int NI = 10, NO = 13, ni, no;
    vector <int> q;
    ni = rand() % 10;
    cout << "ni : " << ni << endl;
    for (int i = 0; i < ni; i++) {
        q.push_back(rand() % 20);
        cout << q[q.size() - 1] << " " << q.size() << endl;
    }
    
    no = rand() % NO;
    cout << "no : " << no << endl;
    for (int i = 0; i < no; i++) {
        if (q.size() != 0) {
            int ii = q[0];
            cout << ii << " " << q.size() << endl;
            q.erase(q.begin());
        }
        else break;
    }
    
    return 1;
}
