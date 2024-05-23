#include "testlib.h"
#include <iostream>
#include <fstream>
#include <vector>
#include <sstream>

int main(int argc, char* argv[]) {
    registerGen(argc, argv, 1);

    // Number of files
    int fileCount = 10;  
    int maxT = 100;

    for (int f = 1; f <= fileCount; ++f) {
        // Create a file for each set of test cases
        std::ostringstream fileName;
        fileName << "file_" << f << ".txt";
        std::ofstream outFile(fileName.str());

        // Number of test cases
        int t = maxT;
        outFile << t << "\n";

        // Generate each test case
        for (int i = 0; i < t; ++i) {
            // Number of elements in the array A
            int n = rnd.next(2, 100);
            outFile << n << "\n";

            // Generate n integers for array A
            std::vector<int> A;
            for (int j = 0; j < n; ++j) {
                int element = rnd.next(-100,100);
                A.push_back(element);
            }

            // Print the array A
            for (int j = 0; j < n; ++j) {
                if (j > 0) outFile << " ";
                outFile << A[j];
            }
            outFile << "\n";
        }

        // Close the current test case file
        outFile.close();
    }

    return 0;
}
