#include <iostream>
#include <vector>

using namespace std;

int search(vector<int>& nums, int target);

int main(int argc, char const* argv[]) {
  vector<int> inputArray1 = {5, 21, 32, 95, 106, 512, 550};
  vector<int> inputArray2 = {-1, 0, 3, 5, 9, 12};

  int target1 = 512;
  int target2 = 9;

  int index1 = search(inputArray1, target1);
  int index2 = search(inputArray2, target2);

  cout << "index1: " << index1 << endl;
  cout << "index2: " << index2 << endl;

  return 0;
}

int search(vector<int>& nums, int target) {
}