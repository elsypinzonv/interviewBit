/*
Grid Unique Paths
https://www.interviewbit.com/problems/grid-unique-paths/
*/

int dp(int i, int j, int A, int B){
    if(i >= A || j >= B) return 0;
    if(i == A -1 || j == B-1)
    return dp(i +1, j, A, B) + dp(i, j+1, A, B);
}

int Solution::uniquePaths(int A, int B) {
    return dp(0,0, A,B);
}
