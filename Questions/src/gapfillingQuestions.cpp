#include "../include/gapfillingQuestions.h"

/*
构造函数
*/
gapfillingQuestions::gapfillingQuestions(/* args */) {
    this->id = 0;
    this->score = 0;
    //this->choice_num = 0;
}

/*
析构函数
*/
gapfillingQuestions::~gapfillingQuestions() {

}

/*
设置正确选项
*/
void gapfillingQuestions::setAnswer(string answer) {
    if (answer.empty()) {
        cout << "设置正确答案失败" << endl;
        return ;
    }
    this->answer = answer;
}

// 获取正确答案
string gapfillingQuestions::getAnswer() {
    if (this->answer.empty()) {
        cout << "获取正确答案失败！" << endl;
        return string("");
    }
    return this->answer;
}

/// @brief how many points you can get in this question.
int gapfillingQuestions::yourScore() {
    //注意：this->answer是string类型，而this->your_answer是vector<string>类型
    cout << "gapfillingQuestions" << endl;
    if (this->answer.empty() || this->your_answer.empty())
        return 0;
    else if (this->answer == this->your_answer[0])
        return this->score;
    else
        return 0;
}

//写下你的答案
bool gapfillingQuestions::writeyourAnswer() {
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
bool gapfillingQuestions::readyourAnswer() {
    //To-Do
    if (this->your_answer.empty())
        return false;
    for (auto i : this->your_answer) 
        cout << i << endl;
    return true;
}

