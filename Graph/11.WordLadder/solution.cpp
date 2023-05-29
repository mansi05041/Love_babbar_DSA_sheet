class Solution{
    public:
    int ladderLength(string beginWord, string endWord, vector<string>& wordList){
        // set: to store the unique words 
        set<string> wordSet(wordList.begin(),wordList.end());
        if(wordSet.find(beginWord)==wordSet.end()) return 0; // endWord not found in the set

        // Queue : used for bfs traversal
        queue<string> q;
        int depth =0; // maintain the depth of the traversal
        // push the beginWord into the queue
        q.push(beginWord);
        
        while (!q.empty())
        {
            depth++; // new depth level started
            int lsize = q.size();
            while (lsize--)
            {
                // remove the front word of queue
                auto curr = q.front();
                q.pop();

                // try the all possible combinations
                for(int i=0;i<curr.size();i++){
                    string temp = curr;
                    for(char ch='a';ch<='z';ch++){
                        temp[i]=ch;
                        // if the temp and curr are same then skip it
                        if(curr.compare(temp)==0) continue;
                        // if the temp and endWord are same then return the result
                        if(temp.compare(endWord)==0) return depth+1;
                        // if the temp is already present in the set then remove it 
                        if(wordSet.find(temp)!=wordSet.end()){
                            q.push(temp);
                            wordSet.erase(temp);
                        }
                    }
                }
            }
            
        }
        return 0; 
    }
};