class WordDictionary {
private:    
    unordered_map<int,vector<string>> mp;
    bool isEqual(string word1,string word2)
    {
        for(int i=0;i<word1.size();i++)
        {
            if(word2[i]=='.' or word1[i]=='.')
                continue;
            if(word1[i]!=word2[i])
                return false;
        }
        return true;
    }
public:
    WordDictionary() {
    }
    
    void addWord(string word) {
        mp[word.size()].push_back(word);
    }
    
    bool search(string word) {
        for(auto it:mp[word.size()])
            if(isEqual(it,word))
                return true;
        return false;
    }
};