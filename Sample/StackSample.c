/*************************************************************************
	> File Name: StackSample
	> Author: Jerry Lu
	> Mail: mynameislujie1992@gmail.com
	> Created Time: 16/3/16
 ************************************************************************/

#include "../src/Stack.h"

void ShowOptions()
{
    printf("*****************************\n"
                   "1------------push element\n"
                   "2------------show stack\n"
                   "3------------pop element\n"
                   "q------------quit\n"
                   "*****************************\n");
}

int main(int argc, char **argv)
{
    char ch;
    int data;
    pt_stack stack = InitStack();

    if (!stack) {
        printf("error init stack failed\n");
        return -1;
    }

    ShowOptions();
    do {
        scanf("%c", &ch);
        setbuf(stdin, NULL);    //一次只接收一个字符
        switch (ch) {
            case '1':
                printf("Please input data you want to push into the stack: ");
                scanf("%d", &data);
                if (!Push(data, stack))
                    printf("Push data failed");
                break;
            case '2':
                DisplayStack(stack);
                break;
            case '3':
                if (!Pop(stack))
                    printf("current stack is empty\n");
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
    DestroyStack(stack);

    return 0;
}

