void deleteWord(trieNode* root,string word){
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