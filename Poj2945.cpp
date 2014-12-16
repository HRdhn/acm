#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;

const int MAX = 20000 + 5;
int ans[MAX];
struct node
{
    char dna[20 + 5];
};

node str[MAX];

bool comp(const node &d1, const node &d2)
{
    if (strcmp(d1.dna, d2.dna) <= 0)
        return true;
    else
        return false;
}
int main()
{
    int n, m, cnt = 0;
    while (scanf("%d%d", &n, &m) != EOF && (n || m) )       //��������
    {
        memset(ans, 0, sizeof(ans));
        for (int i = 0; i < n; ++i)
        {
            scanf("%s", str[i].dna);
        }

        //����
        sort(str, str + n, comp);
        //ͳ��
        for (int i = 0; i < n; ++i)
        {
            if (!strcmp(str[i].dna, str[i + 1].dna))
                cnt++;
            else
            {
                ans[cnt]++;
                cnt = 0;
            }
        }
        for (int i = 0; i < n; ++i)
            printf("%d\n", ans[i]);

    }

}
