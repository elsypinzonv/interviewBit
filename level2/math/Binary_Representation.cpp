/*
Binary Representation
https://www.interviewbit.com/problems/binary-representation/
*/

string Solution::findDigitsInBinary(int A) {
    string bin = "";
    string bit;
    if(A == 0) return "0";
    while(A > 0){
        if(A % 2 == 0) {
            bit = "0";
        } else bit = "1";
        bin = bit.append(bin);
        A= A/2;
    }
 
    return bin;
}
