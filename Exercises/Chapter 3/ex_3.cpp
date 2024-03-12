#include <iostream>

void intrestingReadingOutput()
{
    std::string readedWord;
    int intToTheWord = -1;

    while(true)
    {
        std::cin >> readedWord;

        if(readedWord == "stop")
        {
            intToTheWord = 0;
        }
        else if(readedWord.size() > 5)
        {
            intToTheWord = 1;
        }
        else if(readedWord.size() < 5)
        {
            intToTheWord = 2;
        }
    
        switch(intToTheWord)
        {
            case 0:
                std::cout << "Why quit...?" << std::endl;
                break;
            case 1:
                std::cout << "Whoa big word!" << std::endl;
                break;
            case 2:
                std::cout << "Small word, why?!" << std::endl;
                break;
        } 

        if(intToTheWord == 0)
        {
            break;
        }
    }
}

int main()      
{
    intrestingReadingOutput();

    return 0;
}