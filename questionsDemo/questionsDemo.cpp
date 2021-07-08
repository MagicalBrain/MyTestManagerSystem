//#include "questions.h"
//#include "../questions/include/choiceQuestions.h"
//#include <choiceQuestions.h>
#include <Questions/choiceQuestions.h>

int main() {
    choiceQuestions q1;

    char c = 0;
    int stop_Flag = 0;

    do
    {
        cout << "测试choiceQuestions：" << endl;
        cout << "1 ----- 设定题目编号：" << endl;
        cout << "2 ----- 设定该题满分为：" << endl;
        cout << "3 ----- 设定正确答案：：" << endl;
        cout << "4 ----- 设定选项的个数：" << endl;
        cout << "5 ----- 输入题目的描述，按EOF结束：" << endl;
        cout << "6 ----- 写下你的答案：" << endl;
        cout << "q ----- 退出程序" << endl;

        cin >> c;
        string ans;
        
        
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
                q1.setDescription();
                q1.getDescription();
                break;
            case '6':
                cout << "写下你的答案：" << endl;
                q1.writeyourAnswer();
                q1.readyourAnswer();
                break;
            case 'q':
            default:
            stop_Flag = 1;
                break;
        }
    } while (stop_Flag != 1);
    
    cout << "程序退出！" << endl;
    return 0;
}

