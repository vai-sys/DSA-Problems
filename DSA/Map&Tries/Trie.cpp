#include<iostream>
using namespace std;

class trieNode{
public:
char value;
trieNode* children[26];
bool isTerminal;
trieNode(char val){
    this->value=val;
    for(int i=0;i<26;i++){
        children[i]=NULL;
    }
    this->isTerminal=false;
}


};

void insertWord(trieNode* root,string word){
    if(word.length()==0){
       root->isTerminal=true;
       return;
        }
    char ch=word[0];
    int index=ch-'a';
    trieNode*child;
        // present
        if(root->children[index]!=NULL){
            child=root->children[index];
        }
        else{
            // absent
            child=new trieNode(ch);
            root->children[index]=child;
        }
        insertWord(child,word.substr(1));
}
bool searchWord(trieNode* root, string word) {
    // Base case: if the word is empty, check if the current node is a terminal node
    if (word.length() == 0) {
        return root->isTerminal;
    }

    char ch = word[0];
    int index = ch - 'a';

    // Check if the character exists in the children
    if (root->children[index] != NULL) {
        // Recursively search for the rest of the word in the child node
        return searchWord(root->children[index], word.substr(1));
    } else {
        // If the character does not exist in the children, the word is not found
        return false;
    }
}

int main() {
    trieNode* root = new trieNode('-');
    insertWord(root, "hello");
    insertWord(root, "world");
    cout << "Searching for 'hello': " << (searchWord(root, "hello") ? "Found" : "Not Found") << endl;
    cout << "Searching for 'world': " << (searchWord(root, "world") ? "Found" : "Not Found") << endl;
    cout << "Searching for 'hi': " << (searchWord(root, "hi") ? "Found" : "Not Found") << endl;
   
    cout << "Searching for 'hello' after deletion: " << (searchWord(root, "hello") ? "Found" : "Not Found") << endl;
    return 0;
}