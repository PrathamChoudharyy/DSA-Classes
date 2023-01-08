string balancedSums(vector<int> arr) {
    int sum = 0;
    for(auto i:arr){
        sum+=i;
    }
    if((sum - arr[0]) == 0) return"YES";
    if((sum - arr[arr.size()-1]) == 0) return "YES";
    int inti = arr[0];
    for(int i=1;i<arr.size();i++){
        int x = sum - inti - arr[i];
        if(x == inti) return  "YES";
        inti+=arr[i];
    }
    return  "NO";
}
