//
// Created by erdem on 6.09.2022.
//

#ifndef LEETCODE_PIVOTINDEX_H
#define LEETCODE_PIVOTINDEX_H

#include <stdio.h>
#include <vector>
#include "Problem.h"
#include "Problems/PivotIndex/PivotIndex.h"

class PivotIndex : public Problem<int>{
public:
    PivotIndex(){}
    void Run();
    int Solve();
private:
    std::vector<int> inputArray;
};


#endif //LEETCODE_PIVOTINDEX_H
