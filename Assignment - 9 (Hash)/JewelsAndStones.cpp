class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        set<char> jew;
        for(int i=0;i<jewels.size();i++){
            jew.insert(jewels[i]);
        }
        int c=0;
        for(int j=0;j<stones.size();j++){
            if(jew.find(stones[j])!=jew.end()){
                c++;
            }
        }
        return c;
    }
};
