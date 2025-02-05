// hash map implementation using cpp
#include <bits/stdc++.h>
using namespace std;
typedef struct hashnode {
    string name;
    string address;
} hashNode;

int hashFunction(string name) {
    int n = size(name);
    return n % 10;
}
int main() {

    return 0;
}