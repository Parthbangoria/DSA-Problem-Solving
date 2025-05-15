#include <iostream>
#include <vector>
using namespace std;

int main()
{

    // vector<int> vec1;
    // vector<char> vec2 = {'a', 'b', 'c', 'd', 'e'};
    // vector<int> vec3(3, 0);
    // cout << vec2.size() << endl;
    // vec2.push_back('f');
    // vec2.push_back('g');
    // vec2.push_back('h');
    // cout << vec2.front() << endl;
    // cout << vec2.back() << endl;
    // cout << vec2.at(3) << endl;
    // vec2.pop_back();
    // cout << vec2.size() << endl;
    // for (char i : vec2)
    // {
    //     cout << i << " ";
    // }

    vector<int> vec;

    vec.push_back(0);
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    // vec.push_back(4);

    // cout << &vec << endl;
    cout << vec.size() << endl;
    cout << vec.capacity() << endl;
    return 0;
}