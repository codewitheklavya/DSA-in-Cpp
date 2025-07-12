#include<iostream>
#include<vector>
using namespace std;

void Change(vector<int> &v) {
    int i = 0;
    int j = v.size() - 1;

    while(i < j) {
        if(v[i] == 0) {
            i++;
        }
        else if(v[j] == 1) {
            j--;
        }
        else {
            swap(v[i], v[j]);
            i++;
            j--;
        }
    }
}

int main() {
    vector<int> v;
    v.push_back(0);
    v.push_back(1);
    v.push_back(1);
    v.push_back(1);
    v.push_back(0);
    v.push_back(0);

    cout << "Before Sorting: ";
    for(int i = 0; i < v.size(); i++) {
        cout << v[i];
    }
    cout << endl;

    Change(v);

    cout << "After Sorting: ";
    for(int i = 0; i < v.size(); i++) {
        cout << v[i];
    }
    cout << endl;

    return 0;
}
