#include<iostream>
using namespace std;

void permutation(string&s, int index) {
    if(index == s.length() - 1) {
        cout << s << ' ';
        return;
    }

    for(int j = index; j < s.length(); j++) {
        swap(s[index], s[j]);
        permutation(s, index + 1);
        swap(s[index], s[j]); 
    } 
}

int main() {
    string s = "abc";
    int index = 0;
    permutation(s, index);

    return 0;
}
