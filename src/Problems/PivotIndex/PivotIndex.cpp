//
// Created by erdem on 6.09.2022.
//

#include "PivotIndex.h"

void PivotIndex::Run()
{
    inputArray = std::vector<int>{
        1,2,0,0,-1,-1
    };
    int pivotIndex = Solve();
    printf("Pivot Index is %d", pivotIndex);
}

int PivotIndex::Solve()
{
    int result = -1;
    int inputSize = inputArray.size();
    int inputSum = 0;
    for(int i=0;i<inputSize;++i)
    {
        inputSum += inputArray.at(i);
    }
    int leftSum = 0;
    if(leftSum == inputSum) return 0;
    for(int i=0;i<inputSize;++i)
    {
        int rightSum = inputSum - leftSum - inputArray.at(i);
        if(leftSum == rightSum) return i;
        leftSum += inputArray.at(i);
    }
    return result;
}