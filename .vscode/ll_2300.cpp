vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success)
{
    vector<int> result;
    result.reserve(spells.size()); // pre-allocate memory for the result vector

    sort(potions.begin(), potions.end(), greater<int>()); // sort potions in non-increasing order

    for(int i = 0; i < spells.size(); i++)
    {
        int count = 0;
        for(auto it = lower_bound(potions.begin(), potions.end(), (success + spells[i] - 1) / spells[i], greater<int>()); it != potions.end(); it++)
        {
            if((long long)spells[i] * (*it) >= success)
            {
                count = potions.end() - it;
                break;
            }
        }
        result.push_back(count);
    }
    return result;
}
