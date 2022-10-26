#include "functions.h"
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

int main(int argc, char **argv){
    
    //command --> ./sec.exe <input_file_name> <output_file_name> 
    if(argc != 3){
        std::cout<<"ERROR: You must specificate the input file name and the output file name.\n";
        std::cout<<"./sec.exe <input_file_name> <output_file_name>\n";
        exit(EXIT_FAILURE);
    }

    std::string inputFile = argv[1];
    std::string outputFile = argv[2];
    unsigned t0, t1;

    t0 = clock();
    t1 = clock();

    clean_file(inputFile, outputFile);

    double time = (double(t1-t0)/CLOCKS_PER_SEC);

    std::cout<<"Execution time: "<<time<<"\n";

    exit(EXIT_SUCCESS);
}