/*
Largest Number
https://www.interviewbit.com/problems/largest-number/
*/

int customCompare(string X, string Y){
    string XY = X.append(Y);
    string YX = Y.append(X);
 	if (XY > YX) return 1;
 	return 0;
}

string Solution::largestNumber(const vector<int> &A) {
    vector<string> v(A.size());
    for(int i = 0; i < A.size(); i++){
        v[i] = to_string(A[i]);
    }
    sort(v.begin(), v.end(), customCompare);
    string res = "";
    int sum = 0;
    for(int i = 0; i < v.size(); i++){
        sum += stoi(v[i]);
        if(sum == 0 && stoi(v[i]) == 0) continue;
        res += v[i];
    }
    if(res == "" && sum ==0) res = "0";
    return res; 
}
