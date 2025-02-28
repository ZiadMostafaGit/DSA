#include <iostream>
#include <memory>
#include <string>
#include <vector>
using namespace std;

template <typename T> class stack {
private:
  unique_ptr<T[]> arr;
  int top;
  int size;

public:
  stack(int sz);
  void push(T val);
  T pop();
  int get_top();
  int pick();
  void resize();
  bool is_full();
  bool is_empty();
  void print();
  void deletestack();
  void reverse();
  bool Valid_Parentheses(string s);
  string RemoveAllAdjacentDuplicatesInString(string s);
  vector<int> Asteroid_Collision(vector<int> &asteroids);
  void printfront();
  void insert_at_bottom(int val, int pos);
  int Score_of_Parentheses(string s);
  int next_greater_elemint(int &arr, int val);
};
