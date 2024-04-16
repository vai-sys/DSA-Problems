#include<iostream>
using namespace std;

class trieNode {
public:
    char character;
    trieNode* children[26]; 
    bool isTerminal;
    trieNode(char val) {
        this->character = val;
        this->isTerminal = false;
    
        for (int i = 0; i < 26; i++) {
            this->children[i] = NULL;
        }
    }
};

void insertWord(trieNode* root, string word) {
    if (word.length() == 0) {
        root->isTerminal = true;
        return;
    }
    char ch = word[0];
    int index = ch - 'a';
  
    if (root->children[index] == NULL) {
        
        root->children[index] = new trieNode(ch);
    }
  
    
    insertWord(root->children[index], word.substr(1));
}

bool searchWord(trieNode* root,string word){
    if(word.length()==0){
        return root->isTerminal;
    }
    char ch = word[0];
    int index = ch - 'a';
    if(root->children[index]!=NULL){
       
        return searchWord(root->children[index],word.substr(1));
    }
    else{
       
        return false;
    }
}


void  deleteWord(trieNode* root, string word) {
    if(word.length()==0){
        root->isTerminal=false;
    }

        char ch = word[0];
    int index = ch - 'a';

    if(root->children[index]!=NULL){
       
        return deleteWord(root->children[index],word.substr(1));
    }
    else{
       
        return ;
    }
}

int main() {
    trieNode* root = new trieNode('-');
    insertWord(root,"hello");
    insertWord(root,"world");
    insertWord(root,"babber");
    bool found = searchWord(root,"world");
    cout << (found ? "Word found" : "Word not found") << endl; 
    deleteWord(root,"world");
      found = searchWord(root,"world");
     cout << (found ? "Word found" : "Word not found") << endl; 
    return 0;
}

