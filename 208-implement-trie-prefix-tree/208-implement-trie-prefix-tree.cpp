struct Node{
    Node *links[26];
    bool flag = false;
    
    bool containsKey(char ch){
        return (links[ch - 'a'] != NULL);
    }
    
    void putKey(char ch, Node *node){
        links[ch - 'a'] = node;
    }
    
    Node *getKey(char ch){
        return links[ch - 'a'];
    }
    
    void setEnd(){
        flag = true;
    }
    
    bool isEnd(){
        return flag;
    }
};

class Trie {
private:
    Node* root;    
public:
    /** Initialize your data structure here. */
    Trie() {
        root = new Node();
    }
    
    /** Inserts a word into the trie. */
    void insert(string word) {
        Node* node = root;
        for(int i = 0; i < word.length(); i++){
            if(!(node -> containsKey(word[i]))){
                node -> putKey(word[i],new Node());
            }
            node = node -> getKey(word[i]);
        }
        node -> setEnd();
    }
    
    /** Returns if the word is in the trie. */
    bool search(string word) {
        Node* node = root;
        for(int i = 0; i < word.length(); i++){
            if(!(node -> containsKey(word[i]))){
                return false;
            }
            node = node -> getKey(word[i]);
        }
        return node -> isEnd();
    }
    
    /** Returns if there is any word in the trie that starts with the given prefix. */
    bool startsWith(string prefix) {
        Node *node = root;
        for(int i = 0; i < prefix.length(); i++){
            if(!(node -> containsKey(prefix[i]))){
                return false;
            }
            node = node -> getKey(prefix[i]);
        }
        return true;
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */