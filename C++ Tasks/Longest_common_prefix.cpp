#include<iostream>
#include<vector>
#include<string>
using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {

        int length = strs.size();
        string common_prefix{ "" };
        sort(strs.begin(), strs.end());

        /* sorts the list of strings alphabetically so that firstand last item will have the most
        variation. Therefore, the common prefix between these two will be the longest comon prefix.*/
        
        int min_length = min(strs[0].size(), strs[length - 1].size());
        int i{ 0 };
        
        while (i < min_length && strs[0][i] == strs[length - 1][i]) {
            common_prefix += strs[0][i];
            i++;
        }
        return common_prefix;
    }







};