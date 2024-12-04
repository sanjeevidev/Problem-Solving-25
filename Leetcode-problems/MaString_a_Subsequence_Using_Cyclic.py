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
