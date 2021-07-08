#include "../include/questions.h"

/*
构造函数
*/
questions::questions(/* args */) {
    
}

/*
析构函数
*/
questions::~questions() {

}

//因为题号id和题目分值score都是一样的设置和修改，所以不用写成虚函数
void questions::setID(int id) {
    this->id = id;
}

int questions::getID() {
    return this->id;
}

void questions::setScore(int score) {
    this->score = score;
}

int questions::getScore() {
    return this->score;
}

void questions::setDescription() {
    string str;
    vector<string> des;
    cout << "输入题目的描述，按EOF结束：" << endl;
    while (cin >> str)
    {
        if (str == "q" || str == "quit") {
            cout << "quit!" << endl;
            break;
        }
                    
        des.push_back(str);
    }
    this->description = des;
}

void questions::setDescription(vector<string> description) {
    this->description = description;
}

bool questions::getDescription() {
    if (this->description.empty())
        return false;
    for (auto i : this->description)
        cout << i << endl;
    return true;
}

string questions::getAnswer() {
    return this->answer;
}

void questions::setAnalysis(vector<string> analysis) {
    string str;
    while (cin >> str) 
        analysis.push_back(str);
}

bool questions::getAnalysis() {
    if (this->analysis.empty())
        return false;
    for (auto i : this->analysis)
        cout << i << endl;
    return true;
}

int questions::yourScore() {
    //注意：this->answer是strnig类型，而this->your_answer是vector<string>类型
    if (this->your_answer.empty())
        return 0;
    else if (this->answer == this->your_answer[0])
        return this->score;
}

bool questions::writeyourAnswer() {
    string str;
    vector<string> ans;
    while (cin >> str)
        if (!str.empty())
            ans.push_back(str);
    
    if (ans.empty())
        return false;
    this->your_answer = ans;
    return true;
}

bool questions::readyourAnswer() {
    if (this->your_answer.empty())
        return false;
    for (auto i : this->your_answer) 
        cout << i << endl;
    return true;
}