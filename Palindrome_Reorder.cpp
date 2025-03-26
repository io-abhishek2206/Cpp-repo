#include<iostream>
#include<vector>
using namespace std;
int main()
{
    string str;
    cin >> str;
    long long int len = str.length();
    int freq[26]={0};
        for(long long i=0;i<len;i++)
        {
            if (str[i] == 'A')
                freq[0]++;
            else if (str[i] == 'B')
                freq[1]++;
            else if (str[i] == 'C')
                freq[2]++;
            else if (str[i] == 'D')
                freq[3]++;
            else if (str[i] == 'E')
                freq[4]++;
            else if (str[i] == 'F')
                freq[5]++;
            else if (str[i] == 'G')
                freq[6]++;
            else if (str[i] == 'H')
                freq[7]++;
            else if (str[i] == 'I')
                freq[8]++;
            else if (str[i] == 'J')
                freq[9]++;
            else if (str[i] == 'K')
                freq[10]++;
            else if (str[i] == 'L')
                freq[11]++;
            else if (str[i] == 'M')
                freq[12]++;
            else if (str[i] == 'N')
                freq[13]++;
            else if (str[i] == 'O')
                freq[14]++;
            else if (str[i] == 'P')
                freq[15]++;
            else if (str[i] == 'Q')
                freq[16]++;
            else if (str[i] == 'R')
                freq[17]++;
            else if (str[i] == 'S')
                freq[18]++;
            else if (str[i] == 'T')
                freq[19]++;
            else if (str[i] == 'U')
                freq[20]++;
            else if (str[i] == 'V')
                freq[21]++;
            else if (str[i] == 'W')
                freq[22]++;
            else if (str[i] == 'X')
                freq[23]++;
            else if (str[i] == 'Y')
                freq[24]++;
            else if (str[i] == 'Z')
                freq[25]++;
        }
}