#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct DynamicArray
{
    vector<long long> arr;
    void addElement(long long value)
        arr.push_back(value);
    void deleteElement(long long value)
    {
        for (auto it = arr.begin(); it != arr.end(); ++it)
        {
            if (*it == value)
            {
                arr.erase(it);
                return;
            }
        }
    }
    int getSize()
        return arr.size();
    void sortArrayDescending()
        sort(arr.begin(), arr.end(), greater<long long>());
    int extractMaxTeams(long long threshold)
    {
        int max_possible_teams = 0;
        long long team_size = 0, min_skill = 1e18;

        for (long long skill : arr)
        {
            team_size++;
            min_skill = min(min_skill, skill);

            if (min_skill * team_size >= threshold)
            {
                max_possible_teams++;
                team_size = 0;
                min_skill = 1e18;
            }
        }
        return max_possible_teams;
    }
};
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int max_possible_teams = 0;
        long long n, strength;
        cin >> n >> strength;
        DynamicArray arr;
        long long temp = 0;
        for (long long i = 0; i < n; i++)
        {
            cin >> temp;
            arr.addElement(temp);
        }
        arr.sortArrayDescending();
        max_possible_teams = arr.extractMaxTeams(strength);

        cout << max_possible_teams << endl;
    }
    return 0;
}
