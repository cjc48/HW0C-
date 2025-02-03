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

    

    return m_outputVector;
}
