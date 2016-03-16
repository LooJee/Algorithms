/*************************************************************************
	> File Name: SingleLinkListSample
	> Author: Jerry Lu
	> Mail: mynameislujie1992@gmail.com
	> Created Time: 16/3/16
 ************************************************************************/

#include "../src/LinkList.h"

void ShowOptions()
{
    printf("*****************************\n"
           "1------------add element\n"
           "2------------show list\n"
           "3------------delete element\n"
           "q------------quit\n"
           "*****************************\n");
}

int main(int argc, char **argv)
{
    pt_Link list = InitLink();
    char ch;
    int data;

    if (!list) {
        printf("error init link list failed\n");
        return -1;
    }

    ShowOptions();
    do {
        scanf("%c", &ch);
        setbuf(stdin, NULL);    //一次只接收一个字符
        switch (ch) {
            case '1':
                printf("Please input data you want to inert: ");
                scanf("%d", &data);
                if (!AddData(data, list))
                    printf("add data failed");
                break;
            case '2':
                DisplayList(list);
                break;
            case '3':
                printf("Please input data you want to delete: ");
                scanf("%d", &data);
                DeleteEle(list, data);
                break;
            case 'q':
                printf("Bye bye.\n");
                goto END;
            default:
                continue;
        }
        ShowOptions();
    } while (1);

END:
    DestroyList(list);

    return 0;
}
