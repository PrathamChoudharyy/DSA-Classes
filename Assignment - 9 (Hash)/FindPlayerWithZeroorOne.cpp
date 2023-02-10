class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        map<int,int> win,lose;
        for(int i=0;i<matches.size();i++){
            win[matches[i][0]]++;
            lose[matches[i][1]]++;
        }
        map<int,int>::iterator it,it2;
        vector<int> losenone,loseone;
        for(it=win.begin();it!=win.end();it++){
            if(lose.find(it->first)!=lose.end()){
                it2=lose.find(it->first);
                if(it2->second==1){
                    loseone.push_back(it2->first);
                }
                lose.erase(it->first);
            }
            else{
                losenone.push_back(it->first);//not in lose map
            }
            
        }
        for(it2=lose.begin();it2!=lose.end();it2++){
            if(it2->second==1){
                loseone.push_back(it2->first);
            }
        }
        sort(loseone.begin(),loseone.end());
        return {losenone,loseone};
    }
};
