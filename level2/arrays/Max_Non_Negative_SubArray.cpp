/*
Max Non Negative SubArray
https://www.interviewbit.com/problems/max-non-negative-subarray/
*/

vector<int> Solution::maxset(vector<int> &A) {
    vector<int> v;
    long long int maxi = -1;
    int maxStar = -1;
    int maxEnd = -1;
    int star = -1;
    int end = -1;
    long long int sum = -1;
    
    for(int i = 0; i < A.size(); i++){
        //If is negative
        if(A[i] < 0){
            if(maxi < sum || (maxi == sum && ((maxEnd - maxStar +1) < (end - star + 1) || maxStar == -1))) {
                maxStar = star;
                maxEnd = end;
                maxi = sum;
            }
            sum = -1;
            continue;
        }
        
        //Begin
        if(sum == -1){
            sum = 0;
            star = i; 
        }
        
        sum += A[i];
        end = i;
    }
    
    //if is the lastone
    if(maxi < sum || (maxi == sum && ((maxEnd - maxStar +1) < (end - star + 1) || maxStar == -1))){
        maxStar = star;
        maxEnd = end;
        maxi = sum;
    }
    
    if(maxStar != -1){
        for(int i = maxStar; i <= maxEnd; i++){
            v.push_back(A[i]);
        }
    }
    
    return v;
}
