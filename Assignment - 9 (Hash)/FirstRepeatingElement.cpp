int Solution::solve(vector<int> &A) {
    unordered_map<int, int> mp;
    for(int i=0;i<A.size(); i++){
        mp[A[i]]++;
    }
    for(int j=0;j<A.size();j++){
        if(mp[A[j]]>1){
            return A[j];
        }
    }
    return -1;
}
