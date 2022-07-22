#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int value;
    struct Node *next;
};
void insertNode(struct Node **head, int value);
void DelNode(struct Node **haed, int value);
void printNode(struct Node *head);

void insertNode(struct Node **head, int value)
{
    struct Node *previous;
    struct Node *current;
    struct Node *new;

    current = *head;
    previous = NULL;
    while (current != NULL && current->value < value)
    {
        previous = current;
        current = current->next;
    }
    new = (struct Node *)malloc(sizeof(struct Node));
    if (new == NULL)
    {
        printf("内存分配失败");
        exit(1);
    }
    new->value = value;
    new->next = current;

    if (previous == NULL)
    {
        *head = new;
    }
    else
    {
        previous->next = new;
    }
}
void DelNode(struct Node **head, int value)
{
    struct Node *pre;
    struct Node *cur;
    cur = *head;
    pre = NULL;

    while (cur != NULL && cur->value < value)
    {
        pre = cur;
        cur = cur->next;
    }
    if (cur == NULL)
    {
        printf("找不到匹配的节点\n");
    }
    else
    {
        if (pre == NULL)
        {
            *head = cur->next; //删除头节点的情况，跳到cur后面一个节点去
        }
        else
        {
            pre->next = cur->next;
        }
        free(cur);
    }
}
void printNode(struct Node *head)
{
    struct Node *current;
    current = head;
    while (current != NULL)
    {
        printf("%d  ", current->value);
        current = current->next;
    }
    putchar('\n');
}

int main(void)
{
    struct Node *head = NULL;
    int input;

    while (1)
    {
        printf("请输入一个整数(输入-1表示结束):");
        scanf("%d", &input);
        if (input == -1)
        {
            break;
        }
        insertNode(&head, input);
        printNode(head);
    }
    printf("测试删除整数...\n");
    while (1)
    {
        printf("请输入一个整数(输入-1表示结束):");
        scanf("%d", &input);
        if (input == -1)
        {
            break;
        }
        DelNode(&head, input);
        printNode(head);
    }
}
