// std library includes `vector` class which is kind of like `list` in python,
// except is can only hold homogeneous types.
// it has useful methods to dynamically allocate space, add/remove elements on
// the fly, etc.
#include <vector> 
using std::vector;
using std::begin; // returns iterator to first element
using std::end; // returns iterator to last element

// there are tons of operations you can do on vectors (and other types of collections)
// that are in the <algorithm> module
#include <algorithm>
using std::sort; // sorts in-place
using std::count; // counts occurrences of specific elements

#include <iostream>
using std::cout;

int main() {
    vector<int> nums; // need to specify type T of the elements with `vector<T>` when declaring
    nums.push_back(3); // like `append` in python

    // access a single element of the vector
    nums[0] = 7;

    // this creates an "iterator", and iterates through it
    // equivalent to `for item in nums:` in python
    for (auto item:nums) {
        cout << item << " ";
    }
    cout << '\n';

    nums = {3, 4, 10, 9, 7, 3}; // overwrite with array of out-of-order integers
    sort(begin(nums), end(nums)); // sorts `nums` in-place
    for (int item:nums) { // it doesn't look like `auto` is necessary; can use the type of the collection element
        cout << item << " ";
    }
    cout << '\n';

    // counts the number of times an element appears in collection
    int threes = count(begin(nums), end(nums), 3);
    cout << "there are " << threes << " threes\n";
}