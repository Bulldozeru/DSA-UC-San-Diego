#include <iostream>
#include <vector>

using namespace std;

/*
 * Max Pairwise
 * 3
 * 1 2 3
 * 6 // 3 * 2
 *
 * 5
 * 5 8 9 2 1
 * 72 // 8 * 9
*/
int indexPositionP1 = 0;
int indexPositionP2 = 0;
int indexPositionD1 = 0;
int indexPositionD2 = 0;
long long NP1 = 0;
long long NP2 = 0;
long long ND1 = 0;
long long ND2 = 0;

long long pairs(vector<int> &arr) {

    long long n1 = 0;
    int l1 = 0;
    long long n2 = 0;

    // n1 = n2;
    // n2 = arr.at(n);
    // indexPositionP1 = indexPositionP2;
    // indexPositionP2 = n;

    for (int n = 0; n < arr.size(); n++) {

        if (arr.at(n) > n1) {
            n1 = arr.at(n);
            l1 = n;
        }
    }

    arr.erase(arr.begin()+l1);

    for (int n = 0; n < arr.size(); n++) {

        if (arr.at(n) > n2) { n2 = arr.at(n); }
    }

    NP1 = n1;
    NP2 = n2;

    long long result = 0;
    result = n1 * n2;
    return result;
}



int main() {

    int size = 0;

    cin >> size;
    size++;
    vector<int> container = vector<int>(size);
    container[0] = 0;
    for (int n = 0; n < size-1; n++) {
        cin >> container[n];
    }


    cout << pairs(container) << endl;


    return 0;
}


