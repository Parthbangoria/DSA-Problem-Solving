#include <iostream>
#include <vector>

using namespace std;

// incomplete code complete code might be on geeks for geeks account

// complete this function
vector<string> findPath(vector<vector<int>> &mat)
{
    vector<string> ans;
    string path = "";
    return ans;
}

int main()
{
    vector<vector<int>> mat = {{1, 0, 0, 0}, {1, 1, 0, 1}, {1, 1, 0, 0}, {0, 1, 1, 1}};

    vector<string> ans = findPath(mat);
    for (string path : ans)
    {
        cout << path << endl;
    }

    return 0;
}