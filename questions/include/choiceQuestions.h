#include "questions.h"

/// @brief 选择题
/// @details 多选题和单选题的答案都是string类型
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

    /// @brief 设置问题的正确选项
    virtual void setAnswer(string answer) override;

    /// @brief 获取问题的正确选项
    virtual string getAnswer() override;

    /// @brief how many points you can get in this question.
    /// @brief 该提得到的分数
    virtual int yourScore() override;

    /// @brief 输入答案
    virtual bool writeyourAnswer() override;

    /// @brief 输出答案
    virtual bool readyourAnswer() override;

    /// @brief set some choice in this questions. 设置选项数量的。
    void set_ChoiceNum(int num);

    /// @brief get choice in this questions. 获取选项数量的。
    int get_ChoiceNum();

    /// @brief 设置选项
    void setChoice();

    /// @brief 设置选项，重载函数
    bool setChoice(vector<string> choice_);
};


