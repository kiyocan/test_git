#include <vector>
#include <iostream>
using namespace std;

int main()
{
    vector<int> array;
    
    int i;
    
    for(i=0; i < 10; i++)
    {
        array.push_back(i);
    }
    
    for(i=0; i < array.size(); i++)
    {
        cout << array[i] << endl;
    }
    
    return 0;
}