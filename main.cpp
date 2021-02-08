#include <iostream>
using namespace std;

int main() {
    int A[1000], B[1000], matchA, matchB, equalOrLess = 0;
    std::cin >> matchA;
    for (int x=0; x<matchA;x++){
        std::cin >> A[x];
    }
    std::cin >> matchB;
    for (int y=0; y<matchB;y++, equalOrLess=0){
        std::cin >> B[y];
        for (int x=0; x<matchA;x++) {
            if (A[x] <= B[y]) equalOrLess++;
        }
        std::cout << equalOrLess << std::endl;
    }
    return 0;
}
