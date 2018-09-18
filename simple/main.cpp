#include <iostream>

// function we have written
int sum(int a, int b);
// function to test function
int test_sum();

int main() {
  // test the function
  test_sum();

  std::cout << "\n...continue with main()..." << std::endl;
}
// function we have implemented
int sum(int a, int b) { return a + b; }
// testing function
int test_sum() {
  std::cout << "\nTesting sum()..." << std::endl;
  // initialise counter for number of tests passed
  int tests_passed = 0;
  // do several tests, checking for correct return value
  // and print appropriate message
  if (sum(0, 0) == 0) {
    std::cout << "passed sum(0, 0) == 0" << std::endl;
    tests_passed++;
  } else {
    std::cout << "failed sum(0, 0) == 0" << std::endl;
  }
  if (sum(-1, 1) == 0) {
    std::cout << "passed sum(-1, 1) == 0" << std::endl;
    tests_passed++;
  } else {
    std::cout << "failed sum(-1, 1) == 0" << std::endl;
  }
  if (sum(2, 3) == 5) {
    std::cout << "passed sum(2, 3) == 5" << std::endl;
    tests_passed++;
  } else {
    std::cout << "failed sum(2, 3) == 5" << std::endl;
  }
  if (sum(826109, 78657567) == 79483676) {
    std::cout << "passed sum(826109, 78657567) == 79483676" << std::endl;
    tests_passed++;
  } else {
    std::cout << "failed sum(826109, 78657567) == 79483676" << std::endl;
  }
  if (sum(-99, -1) == -100) {
    std::cout << "passed sum(-99, -1) == -100" << std::endl;
    tests_passed++;
  } else {
    std::cout << "failed sum(-99, -1) == -100" << std::endl;
  }
  // print summary message and return number of tests passed
  // may not want/need to use the return value in main
  std::cout << "sum() passed " << tests_passed << "/5 tests." << std::endl;
  return tests_passed;
}