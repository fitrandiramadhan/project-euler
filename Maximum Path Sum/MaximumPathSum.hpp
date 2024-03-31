//file		:	MaximumPathSum.hpp
//author	:	steaKK

#ifndef MaximumPathSum_HPP
#define MaximumPathSum_HPP

#include <iostream>
#include <vector>

using namespace std;

class MaximumPathSum {
public:
	MaximumPathSum();
	MaximumPathSum(vector<vector<int>> _data);

private:
	vector<vector<int>> data;
};

#endif
