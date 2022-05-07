#include "Manager.hpp"

Manager::Manager(std::string filename)
{
    this->filename = filename;
    this->newfile = filename + ".replace";
    in.open(filename);
    if (!in.is_open())
    {
        std::cout<< "\033[1;31m"  << "Error: File " << filename << " could not be opened" << std::endl;
    }
}

Manager::~Manager()
{
    in.close();
    out.close();
}

std::string Manager::getdata()
{
    return data;
}

void Manager::reader(){ getline(Manager::in , Manager::data ,'\0'); }

void Manager::replacer(std::string data, std::string s1, std::string s2)
{
    std::string::size_type pos = 0;
    while ((pos = data.find(s1, pos)) != std::string::npos)
    {
        data.erase(pos, s1.length());
        data.insert(pos, s2);
        pos += s2.length();
    }
    out.open(newfile);
    out << data;
}
