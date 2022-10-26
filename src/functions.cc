#include "functions.h"
#include <string>
#include <fstream>
#include <iostream>
#include <cstdlib>

//Remove comments and empty lines.
void clean_file(std::string input_file_name, std::string output_file_name){
    std::ifstream inputFile(input_file_name);
    std::ofstream outputFile(output_file_name);

    std::string line;
    int nlines = 0;

    if(!inputFile.is_open()){
        std::cout<<"ERROR. Can't open file "<<input_file_name<<"\n";
        exit(EXIT_FAILURE);
    }

    if(!outputFile.is_open()){
        std::cout<<"ERROR. Can't open file "<<output_file_name<<"\n";
        exit(EXIT_FAILURE);
    }

    while(!inputFile.eof() && !outputFile.eof()){
        getline(inputFile, line);
        nlines++;

        one_line_comments_off(line);

        if(line != ""){
            outputFile << line << "\n";
        }        
    }

    inputFile.close();
    outputFile.close();
}

void one_line_comments_off(std::string &line){
    for(int i = 0; i<line.length(); i++){
        if(line[i] == ';'){
            line.erase(i);
        }
    }
}