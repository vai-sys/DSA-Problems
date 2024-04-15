#include<iostream>
using namespace std;

class trieNode{
public:
char value;
trieNode* children[26];
bool isterminal;
trieNode(char val){
    this->value=val;
    for(int i=0;i<26;i++){
        children[i]=NULL;
    }
    this->isterminal=true;
}

};