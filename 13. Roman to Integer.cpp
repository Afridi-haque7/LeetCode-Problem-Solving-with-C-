class Solution {
public:
    int romanToInt(string s) {
        int n = s.length();
        int count=0;
        
        
        for(int i=0; i<n; i++){
            if(s[i]=='C' && s[i+1]=='D'){
                count +=400;
                ++i;
            }
            else if(s[i]=='C' && s[i+1]=='M'){
                count += 900;
                ++i;
            }
            else if(s[i]=='X' && s[i+1]=='L'){
                count += 40;
                ++i;
            }
            else if(s[i]=='X' && s[i+1]=='C'){
                count += 90;
                ++i;
            }
            else if(s[i]=='I' && s[i+1]=='V'){
                count += 4;
                ++i;
            }
            else if(s[i]=='I' && s[i+1]=='X'){
                count += 9;
                ++i;
            }
            else {
                switch(s[i]){
                    case 'I':
                        count += 1;
                        break;
                    case 'V':
                        count += 5;
                        break;
                    case 'X':
                        count += 10;
                        break;
                    case 'L':
                        count += 50;
                        break;
                    case 'C':
                        count += 100;
                        break;
                    case 'D':
                        count += 500;
                        break;
                    case 'M':
                        count += 1000;
                        break;
                }
            }
        }
        return count;
    }
};
