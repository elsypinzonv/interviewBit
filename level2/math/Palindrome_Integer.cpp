/*
Palindrome Integer
https://www.interviewbit.com/problems/palindrome-integer/
*/

//using memory
int Solution::isPalindrome(int A) {
    string B = to_string(A);
    for(int i = 0; i < B.size()/2; i++){
        if(B[i] != B[B.size() - i - 1]) return false;
    }
    return true; 
}
