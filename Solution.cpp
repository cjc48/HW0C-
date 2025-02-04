#include <stdio.h>
#include <string>
#include <vector>
#include <fstream>

using namespace std;

class Solution {

/*
 * Class data:
 * Solution is the constructor, and takes in the vector that was read by the driver.
 * The driver will call outputVector(). This is where you should calculate the resultant vector.
 * You can store both values, if you wish. The constructor stores the input vector in m_inputVector.
 */
    public:
        Solution(vector<int> in_vector);
        vector<int> outputVector();
        vector<int> m_inputVector;
        vector<int> m_outputVector;
};



Solution::Solution(vector<int> in_vector) :
    m_inputVector(in_vector)
{}


vector<int> Solution::outputVector(){
    /*
     * Implement the solution in this function
     * Return the variable "m_outputVector" after you fill it with stable
     * matches.
     */

    //given any integer n >= 1, and a vector x of length n
    //return the vector y = Un * x

    //Un[i][j]
    // = 0 if j < i
    // else = 1

    int iSize = this->m_inputVector.size();
    int total = 0;
    //add to the back of the output like a stack
    //add one more member to the total each time
    for(int i = iSize-1; i >=0 ; i--){
        total += this->m_inputVector[i];
        this->m_outputVector.push_back(total);
    }
    //need to reverse to meet the problem specs
    reverse(this->m_outputVector.begin(), this->m_outputVector.end());
    return this->m_outputVector;
}
