#include <iostream>
#include <vector>
using std::cout;
using std::cin;
using std::endl;
using std::vector;
void sortDescending(vector<int>nums);
void swap(int&,int&);

int main()
{
  int numA, numB, numC;
  vector<int> num;
  cout<<"Enter any three numbers: ";
  cin>>numA>>numB>>numC;
  num.push_back(numA);
  num.push_back(numB);
  num.push_back(numC);
  sortDescending(num);
  cout<<"From greatest to least, they are: ";
  cout<<num.at(0)<<","<<num.at(1)<<","<<num.at(2)<<endl;
  return 0;
}
/*
 * sort vector in descending order
 */
void sortDescending(vector<int>nums)
{
  if( nums.at(0) < nums.at(2) )
  {
    swap(nums.at(0), nums.at(2));
  }
  if( nums.at(0) < nums.at(1) )
  {
    swap(nums.at(0),nums.at(1));
  }
  if( nums.at(1) < nums.at(2) )
  {
    swap(nums.at(1),nums.at(2));
  }
}
/*
 * swap integers
 */
void swap(int &first, int &second)
{
  int temp = first;
  first = second;
  second = temp;
}
