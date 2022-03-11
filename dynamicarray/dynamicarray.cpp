#include <iostream>
using namespace std;
class DynamicArray
{
private:
    int size;

public:
    int arr[5];
    int get(int index);
    void DynamicArray()
    {
        arr = {1, 2, 3, 4, 5};
    }
};

int DynamicArray::get(int index)
{
    return arr[index];
}
int main()
{
    DynamicArray p;
    cout << p.get(2) << endl;
    return 0;
}
