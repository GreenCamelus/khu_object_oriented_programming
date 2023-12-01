//random number(0~9) generated every second for 60 seconds.

#include <iostream>
#include<Windows.h>
using namespace std;
int main() {
    int time = 0, NI = 10, ni;
    while (time < 60) {
        Sleep(1000);
        ni = rand() % NI;
        cout << " " << time << " " << ni << endl;
        time++;
    }
    return 0;
}
