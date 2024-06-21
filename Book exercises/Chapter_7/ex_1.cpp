#include <iostream>
#include <string>
#include <stdexcept>
#include <fstream>

class Text
{
public:
    std::string text;

    Text() {}
    Text(const std::string& fileName) : text(getTextFromFile(fileName)) {} 
    ~Text() {};   

    void contents(void) const { std::cout << text << std::endl; }

private: 
    std::string getTextFromFile(const std::string& fileName);  
};


std::string Text::getTextFromFile(const std::string& fileName)
{
    std::ifstream file(fileName);

    if(!file.is_open()) 
    {
        std::cerr << "Failed to open file" << std::endl;
        return nullptr;
    }

    std::string line;
    std::string buffer;

    // Read the file line by line into a string
    while(getline(file, line)) 
    {
        buffer.append(line);
    }

    // Close the file
    file.close();

    return buffer;
}

int main()
{
    Text txt("test_input_ex_1.txt");

    txt.contents();

    return 0;
}