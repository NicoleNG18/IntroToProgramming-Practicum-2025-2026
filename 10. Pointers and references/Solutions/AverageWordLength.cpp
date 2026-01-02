//Напишете функция, която приема текст и пресмята средната дължина на думите (броя букви, разделен на броя на думите). 
//Изреченията в текста завършват с един от следните символи: точка ., удивителна ! и въпросителна ?

#include <iostream>

bool isDot(char ch) { return ch == '.'; }
bool isExcl(char ch) { return ch == '!'; }
bool isQuest(char ch) { return ch == '?'; }
bool isSpace(char ch) { return ch == ' '; }

bool isSymbol(char ch) { return isDot(ch) || isExcl(ch) || isQuest(ch) || isSpace(ch); }
bool isLower(char ch) { return ch >= 'a' && ch <= 'z'; }
bool isUpper(char ch) { return ch >= 'A' && ch <= 'Z'; }
bool isLetter(char ch) { return isLower(ch) || isUpper(ch); }

double getAverageWordLength(const char* str) {
  
    if (!str) 
      return 0;

    double lettersCnt = 0;
    double wordCnt = 0;
    bool inWord = false;

    while (*str) {
      
        if (isLetter(*str)) {
            lettersCnt++;
            inWord = true;
        } 

        if ((isSymbol(*str) || *(str + 1) == '\0') && inWord) {
            wordCnt++;
            inWord = false;
        }

        str++;
    }

    return wordCnt > 0 ? lettersCnt / wordCnt : 0;
}

int main() {
    const char* text = "Hello world! This is a test.";
    std::cout << "Average word length: " << getAverageWordLength(text) << std::endl;
}
