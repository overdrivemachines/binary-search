#include <iostream>
#include <vector>

using namespace std;

int search(vector<int>& nums, int target);

int main(int argc, char const* argv[]) {
  vector<int> inputArray1 = {5, 21, 32, 95, 106, 512, 550};
  vector<int> inputArray2 = {-1, 0, 3, 5, 9, 12};

  int target1 = 512;
  int target2 = 0;

  int index1 = search(inputArray1, target1);
  int index2 = search(inputArray2, target2);

  cout << "index1: " << index1 << endl;
  cout << "index2: " << index2 << endl;

  return 0;
}

int search(vector<int>& nums, int target) {
  int startIndex = 0;
  int endIndex = nums.size() - 1;
  int midIndex = (startIndex + endIndex) / 2;
  int midValue = nums[midIndex];

  if (nums.size() == 0)
    return -1;
  if (nums[0] == target)
    return 0;

  while ((endIndex - startIndex) >= 0) {
    // cout << "start index: " << startIndex << endl;
    // cout << "end index: " << endIndex << endl;
    // cout << "mid index: " << midIndex << endl;
    // cout << "===============\n";

    midValue = nums[midIndex];
    if (midValue == target)
      return midIndex;
    if (nums[startIndex] == target)
      return startIndex;
    if (nums[endIndex] == target)
      return endIndex;

    if (target > midValue) {
      startIndex = midIndex + 1;
      endIndex--;
    } else {
      startIndex++;
      endIndex = midIndex - 1;
    }
    midIndex = (startIndex + endIndex) / 2;
  }

  return -1;
}
