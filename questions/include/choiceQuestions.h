#include "questions.h"

/// @brief 选择题
class choiceQuestions : public questions
{
private:
    /// @brief the choice of this question.
    vector<string> choice;
    
    /// @brief the number of choice in this question.
    int choice_num;

public:
    choiceQuestions(/* args */);
    virtual ~choiceQuestions();

    virtual void setAnswer(string answer) override;
    virtual string getAnswer() override;

    /// @brief how many points you can get in this question.
    virtual int yourScore() override;

    virtual bool writeyourAnswer() override;

    /// @brief set some choice in this questions. 设置选项数量的。
    void set_ChoiceNum(int num);

    /// @brief get choice in this questions. 获取选项数量的。
    int get_ChoiceNum();

    void setChoice();
    bool setChoice(vector<string> choice_);
};


