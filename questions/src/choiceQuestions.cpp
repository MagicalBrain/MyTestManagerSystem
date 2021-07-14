#include "../include/choiceQuestions.h"

/*
构造函数
*/
choiceQuestions::choiceQuestions(/* args */) {
    this->id = 0;
    this->score = 0;
    this->choice_num = 0;
}

/*
析构函数
*/
choiceQuestions::~choiceQuestions() {

}

/*
设置正确选项
*/
void choiceQuestions::setAnswer(string answer) {
    if (answer.empty()) {
        cout << "设置正确答案失败" << endl;
        return ;
    }
    this->answer = answer;
}

// 获取正确答案
string choiceQuestions::getAnswer() {
    if (this->answer.empty()) {
        cout << "获取正确答案失败！" << endl;
        return string("");
    }
    return this->answer;
}

/// @brief how many points you can get in this question.
int choiceQuestions::yourScore() {
    //注意：this->answer是string类型，而this->your_answer是vector<string>类型
    if (this->answer.empty() || this->your_answer.empty())
        return 0;
    else if (this->answer == this->your_answer[0])
        return this->score;
    else
        return 0;
}

//写下你的答案
bool choiceQuestions::writeyourAnswer() {
    //可能会出现非法输入的情况，但我希望这个问题能够通过以后的UI设计那块来解决，用代码不够方便
    string ans;
    cin >> ans;
    if (ans.empty())
        return false;
    if (this->your_answer.empty() == false)
        this->your_answer.pop_back();
    this->your_answer.push_back(ans);
    return true;
}

//读取你的答案
bool choiceQuestions::readyourAnswer() {
    //To-Do
    if (this->your_answer.empty())
        return false;
    for (auto i : this->your_answer) 
        cout << i << endl;
    return true;
}

//设置选项的数量
void choiceQuestions::set_ChoiceNum(int num) {
    this->choice_num = num;
}

/// @brief get choice in this questions. 获取选项的个数。
int choiceQuestions::get_ChoiceNum() {
    return this->choice_num;
}

//设置各个选项的内容
void choiceQuestions::setChoice() {
    vector<string> choice_;
    if (this->choice_num == 0) {
        int num;
        cout << "请输入选项的个数：" << endl;
        cin >> num;
        this->set_ChoiceNum(num);
    }
    else {
        string str;
        for (int i = 0; i < this->get_ChoiceNum(); i++)
        {
            cin >> str;
            choice_.push_back(str);
        }
        this->choice = choice_;
    }
}

bool choiceQuestions::setChoice(vector<string> choice_) {
    if (choice_.size() != this->get_ChoiceNum())
        return false;
    else {
        this->choice = choice_;
        return true;
    }
}

// 获取选项内容
bool choiceQuestions::getChoice() {
    if (this->choice_num < 1 || this->choice.empty())
        return false;
    for (auto i : this->choice)
        cout << i << endl;
    return true;
}