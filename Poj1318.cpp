#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
    vector<string> rawDic;
    vector<string> sortedDic;
    vector<string> words;
    string s;
    for (int i = 0; cin >> s && s != "XXXXXX"; ++i)         //�����ֵ䣬�����ֵ�������
    {
        rawDic.push_back(s);
    }
    sort(rawDic.begin(), rawDic.end());
    sortedDic = rawDic;
    for (int i = 0; i != sortedDic.size(); ++i)
        sort(sortedDic[i].begin(), sortedDic[i].end());
    for (int i = 0; cin >> s && s != "XXXXXX"; ++i)     //����ҪѰ�ҵĵ���
    {
        words.push_back(s);
        sort(words[i].begin(), words[i].end());
    }
    for (int i = 0; i != words.size(); ++i)
    {
        bool flag = false;
        for (int j = 0; j != sortedDic.size(); ++j)
        {
            if (words[i] == sortedDic[j])
            {
                cout << rawDic[j] << endl;
                flag = true;
            }
        }
        if (!flag)
            cout << "NOT A VALID WORD" << endl;
        cout << "******" << endl;
    }


}
