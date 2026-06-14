class Solution {
public:
    bool wordPattern(string pattern, string s) {
		map<char, string> map1;
		map<string, char> map2;

		int startIndex = 0;
		int endIndex = 0;
		int patternIndex = 0;
		while (endIndex < s.length() - 1) 
		{
			if (patternIndex == pattern.length() && endIndex <s.length()-1) {
				return false; //this means that the pattern ended before the words
			}
			string word = "";
			while (endIndex < s.length() && s[endIndex] != ' ') {
				endIndex++;
			}
			if (endIndex == (s.length())) { //words endded befor the pattern ends
				if (patternIndex < pattern.length()-1)
					return false;
			}

			word = s.substr(startIndex, endIndex - startIndex);
			startIndex = endIndex + 1;
			endIndex++;
			if (map1.find(pattern[patternIndex]) != map1.end())  //found pattern char
			{
				if (map2.find(word) != map2.end()) { //found word
					if (map1[pattern[patternIndex]] != word || map2[word] != pattern[patternIndex]) {
						return false;
					}
				}
				else { //not found word
					return false;
				}
			}
			else { //not found pattern char
				if (map2.find(word) != map2.end()) { //found the word
					if (map2[word] != pattern[patternIndex])
						return false;
				}
				else { //not found word
					map1[pattern[patternIndex]] = word;
					map2[word] = pattern[patternIndex];
				}
			}
			patternIndex++;
		}
		return true;
    }
};
