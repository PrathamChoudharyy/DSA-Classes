int Solution::solve(string A) {
    unordered_map<char, int> mp;
    for(int i=0;i<A.size();i++){
        mp[A[i]]++;
    }
    int c=0;
    unordered_map<char, int>::iterator it;
    for(it=mp.begin();it!=mp.end();it++){
        if(it->second%2!=0){
            c++;
        if(c>1){
            return 0;
        }
        }
    }
    return 1;
}
