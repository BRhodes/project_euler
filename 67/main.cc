#include <iostream>
#include <vector>

using namespace std;

int main() {
    int row = 1;
    vector< vector<int> > tr;
    int num;
    cin >> num;
    while (cin) {
        tr.push_back(vector<int>());
        for (int i = 0; i < row; i++) {
            tr[row-1].push_back(num);
            cin >> num;
        }
        row++;
    }

    for (int i = tr.size() - 2; i >= 0; i--) {
        for (int j = 0; j < tr[i].size(); j++) {
            tr[i][j] += (tr[i+1][j] > tr[i+1][j+1]) ? tr[i+1][j] : tr[i+1][j+1];
        }
    }
    
    cout << tr[0][0] << endl;

/*
    for (int i = 0; i < tr.size(); i++) {
        cout << i << ": ";
        for (int j = 0; j < tr[i].size(); j++) {
            cout << tr[i][j] << " ";
        }
        cout << endl;
    }
*/
    return 0;
}
