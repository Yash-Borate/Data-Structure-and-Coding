#include <iostream>
#include <vector>
using namespace std;

void display(vector<int> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}
int main()
{
    vector<int> vec1;
    int ele;
    int size;
    cout << "enter the size of vector : ";
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        cout << "\nenter the element :";
        cin >> ele;
        vec1.push_back(ele);
    }
    display(vec1);

    vector<int> :: iterator iter=vec1.end();
    vec1.insert(iter,10);
    display(vec1);

    vector<char> vec2(4);
    vector<char> vec3(vec2);
    vector<int> vec4(6.3);
    return 0;
}