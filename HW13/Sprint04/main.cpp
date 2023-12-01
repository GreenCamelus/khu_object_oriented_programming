#include <iostream>
#include <Windows.h>
#include <vector>
#include<fstream>
#include"queue.h"

using namespace std;
int main() {
    srand((unsigned)time(NULL));
    cout << "NI = 15, NO = 5\n";
    queue a(15, 5, 100);
    a.runEx("result01.txt");

    cout << "\nNI = 15, NO = 15\n";
    queue b(15, 15, 100);
    b.runEx("result02.txt");

    cout << "\nNI = 15, NO = 30\n";
    queue c(15, 30, 100);
    c.runEx("result03.txt");
    
}


void queue::runEx(string AA) {
    int t = 0, NofPackets[120];

    int NI = QI, NO = QO, ni, no;
    int  capacity = this ->capa, lost = 0;
    ofstream out;
    out.open(AA);

    vector <int> queue;

    while (t < 120) {

        ni = rand() % NI;
        no = rand() % NO;

        if (capacity < queue.size() + ni) {
            lost += queue.size() + ni - capacity;
            ni = capacity - queue.size();
        }

        for (int i = 0; i < ni; i++) {
            queue.push_back(rand() % 20);
        }

        for (int i = 0; i < no; i++) {
            if (queue.size() != 0) {
                queue.erase(queue.begin());
            }
            else break;
        }
        out << t << " " << queue.size() << endl;
        NofPackets[t] = queue.size();
        t++;

    }
    cout << "lost = " << lost << endl;
    out.close();
    float avg = 0;
    for (int i = 0; i < 120; i++) {
        avg += NofPackets[i];
    }
    avg /= 120;
    cout << "avg = " << avg << endl;
}
