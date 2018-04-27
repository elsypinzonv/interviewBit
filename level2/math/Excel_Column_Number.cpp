/*
Excel Column Number
https://www.interviewbit.com/problems/excel-column-number/
*/

int Solution::titleToNumber(string A) {
    int sum = 0;   
    int mul = 1;
    for(int i = A.size() - 1; i >= 0; i--){
        sum += (A[i] - 'A' + 1)*mul;
        mul = mul*26;
    }
    return sum;
}
