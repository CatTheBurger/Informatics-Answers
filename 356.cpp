#include <iostream>
#include <vector>

using namespace std;

namespace PC {

    template<typename T>
    class Vector : public std::vector<T> {
    public:
        void remove(int index = 0) {
            if (index <= this->size()) this->erase(this->begin() + index);
            else return;
        }

        void push(T value) {
            this->push_back(value);
        }
    };

}

int main() {

    int width, height;
    PC::Vector<PC::Vector<int>> numbers;

    cin >> width;
    cin >> height;

    if(width < 0 && height < 0) return 1;

    for (int i = 0; i < width; i++) {
        PC::Vector<int> temp;

        for (int j = 0; j < height; j++) {
            int val = 0;

            cin >> val;

            temp.push(val);
        }

        numbers.push(temp);
    }

    long long val = 0;
    long long max1 = 0;
    unsigned int ind = 0;

    for (int i = 0; i < width; i++) {
        val = 0;

        for (int j = 0; j < height; j++) {
            val += numbers[i][j];
        }

        if (max1 < val) {
            max1 = val;
            ind = i;
        }
    }

    cout << max1 << endl;
    cout << ind << endl;

    return 0;
}
