/*************************************************************************
	> File Name: CircleQueueSample
	> Author: Jerry Lu
	> Mail: mynameislujie1992@gmail.com
	> Created Time: 16/3/16
 ************************************************************************/

#include "../src/CircleQueue.h"

void ShowOptions()
{
    printf("*****************************\n"
                   "1------------enqueue element\n"
                   "2------------show queue\n"
                   "3------------dequeue element\n"
                   "q------------quit\n"
                   "*****************************\n");
}

int main(int argc, char **argv)
{
    char ch;
    int data;
    pt_cirque circle_queue = InitQueue(10);

    if (!circle_queue) {
        printf("error init stack failed\n");
        return -1;
    }

    ShowOptions();
    do {
        scanf("%c", &ch);
        setbuf(stdin, NULL);    //一次只接收一个字符
        switch (ch) {
            case '1':
                printf("Please input data you want to enqueue: ");
                scanf("%d", &data);
                Enqueue(data, circle_queue);
                break;
            case '2':
                DisplayQueue(circle_queue);
                break;
            case '3':
                Dequeue(circle_queue);
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
    DestroyQueue(circle_queue);

    return 0;
}

