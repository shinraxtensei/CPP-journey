#ifndef MANAGER_HPP
#define MANAGER_HPP

#include <fstream>
#include <iostream>
#include <string>

class Manager{
    private:
        std::ifstream in ;
        std::ofstream out;
        std::string data;
        std::string filename;
        std::string newfile;
    public:
        Manager(std::string filename);
        ~Manager();
        std::string getdata();
        void replacer(std::string data, std::string s1, std::string s2);
        void reader();


};

#endif