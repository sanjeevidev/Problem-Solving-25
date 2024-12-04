# You are given two 0-indexed strings str1 and str2.
# In an operation, you select a set of indices in str1, and for each index i in the set, increment str1[i] to the next character cyclically. 
# That is 'a' becomes 'b', 'b' becomes 'c', and so on, and 'z' becomes 'a'.
# Return true if it is possible to make str2 a subsequence of str1 by performing the operation at most once, and false otherwise.

class Solution:
    def canMakeSubsequence(self, str1: str, str2: str) -> bool:
        str2_idx = 0
        len_str1,len_str2 = len(str1),len(str2)

        for str1_idx in range(len_str1):
            if str2_idx < len_str2 and (str1[str1_idx] == str2[str2_idx] 
            or ord(str1[str1_idx])+1 == ord(str2[str2_idx])
            or ord(str1[str1_idx])-25 == ord(str2[str2_idx])):
                str2_idx +=1
        return str2_idx == len_str2
