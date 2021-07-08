//#include "questions.h"
//#include "../questions/include/choiceQuestions.h"
//#include <choiceQuestions.h>
#include <Questions/choiceQuestions.h>

int main() {
    choiceQuestions q1;

    char c;
    int stop_Flag = 0;

    do
    {
        cout << "测试choiceQuestions：" << endl;
        cout << "测试choiceQuestions：" << endl;
        switch (c)
        {
            case '1':
                /* code */
                int id;
                cout << "设定题目编号：" << endl;
                cin >> id;
                q1.setID(id);
                cout << q1.getID() << endl;
                break;
            case '2':
                int score;
                cout << "设定该题满分为：" << endl;
                cin >> score;
                q1.setScore(score);
                cout << q1.getScore() << endl;
                break;
            case '3':
                string ans;
                cout << "设定正确答案：" << endl;
                cin >> ans;
                q1.setAnswer(ans);
                cout << q1.getAnswer() << endl;
                break;
            case '4':
                int num;
                cout << "设定选项的个数：" << endl;
                cin >> num;
                q1.set_ChoiceNum(num);
                cout << q1.get_ChoiceNum() << endl;
                break;
            case '5':
                string str;
                vector<string> des;

                cout << "输入题目的描述，按EOF结束：" << endl;
                while (cin >> str)
                {
                    des.push_back(str);
                }
                
                q1.setDescription(des);
                q1.getDescription();
                break;
            case '6':
                cout << "写下你的答案：" << endl;
                q1.writeyourAnswer();
                q1.readyourAnswer();
                break;
            default:
                break;
        }
    } while (stop_Flag == 1);
    
    return 0;
}

