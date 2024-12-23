#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int vec = 0, can = 0;
    int tot1 = 0, tot2 = 0, tot3 = 0, tot4 = 0, tot5 = 0, tot6 = 0;
    cin >> vec;
    for (int i = 0; i < vec; i++)
    {
        cin >> can;
        switch (can)
        {
        case 1:
            tot1++;
            break;
        case 2:
            tot2++;
            break;
        case 3:
            tot3++;
            break;
        case 4:
            tot4++;
            break;
        case 5:
            tot5++;
            break;
        case 6:
            tot6++;
            break;
        default:

            break;
        }
    }
        int totbajo = min({tot1, tot2, tot3, tot4, tot5, tot6});
        int totalto = max({tot1, tot2, tot3, tot4, tot5, tot6});
        int tot = (totalto - totbajo);
        cout <<tot<<endl;
        return 0;
}
