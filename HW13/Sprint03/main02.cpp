using namespace std;
int main() {
    srand((unsigned)time(NULL));
    int t=0, NofPackets[120];

    int NI = 30, NO = 30, ni, no;
    int  capacity = 100, lost = 0;

    vector <int> queue;

    while(t < 120){

        ni = rand() % NI;
        no = rand() % NO;
        cout << "\nt = " << t << endl;
        cout << "ni = " << ni << endl;
        cout << "no = " << no << endl;
        
        // push
        if (capacity < queue.size() + ni) {
            lost += queue.size() + ni - capacity;
            ni = capacity - queue.size();
        }
        //cout << "lost = " << lost << endl;

        //cout << "\nin\n";
        for (int i = 0; i < ni; i++) {
            queue.push_back(rand() % 20);
            //cout << queue.size() << " " << queue[queue.size() - 1] << endl;
        }

        //cout << "\nout\n";
        for (int i = 0; i < no; i++) {
            if (queue.size() != 0) {
                //cout << queue[0] << "\n";
                queue.erase(queue.begin());
            }
            else break;
        }
        NofPackets[t] = queue.size();
        t++;
        
        cout << "queue size = " << queue.size() << endl;
        cout << "lost = " << lost << endl;
    }
    
}
