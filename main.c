//����ı�ʾ��ʵ�֣����������ң����룬�����
//1.�����la=(1,3,6,9,10), lb=(2,3,4,5,6,8,14)
//�������������������������ʵ�ֹ鲢��

//#include <stdio.h>
//#include <stdlib.h>
//typedef struct Node {
//    int data;
//    struct Node* next;
//} Node;
//
//void createNode (Node* node, int n, int* l) {
//    Node* node1 = node;
//    for (int i = 0; i < n; ++i) {
//        node1->data = l[i];
//        if (i == n-1) {
//            node1->next = NULL;
//        } else {
//            node1->next = (Node*)malloc(sizeof (Node));
//            node1 = node1->next;
//        }
//    }
//
//}
//
//Node* combinelists(Node* la, Node* lb) {
//    Node node;
//    Node* tail = &node;
//    while (la != NULL && lb != NULL) {
//        if (la->data < lb->data) {
//            tail->next = la;
//            la = la->next;
//        } else {
//            tail->next = lb;
//            lb = lb->next;
//        }
//        tail = tail->next;
//    }
//    if (la != NULL) {
//        tail->next = la;
//        la = la->next;
//        tail = tail->next;
//    }
//    if (lb != NULL) {
//        tail->next =lb;
//        lb = lb->next;
//        tail = tail->next;
//    }
//    return node.next;
//}
//
//void printlist(Node* node){
//    while (node != NULL) {
//        printf("%d ",node->data);
//        node = node->next;
//    }
//    printf("\n");
//}
//int main() {
//    int la1[] = {1, 3, 6, 9, 10};
//    int lb1[] = {2, 3, 4, 5, 6, 8, 14};
//    Node* la = (Node*) malloc(sizeof(Node));
//    Node* lb = (Node*) malloc(sizeof(Node));
//    createNode(la, 5, la1);
//    createNode(lb, 7, lb1);
//    printlist(la);
//    printlist(lb);
//    Node* l=combinelists(la, lb);
//    printlist(l);
//    return 0;
//}





//����N������������һ��������Ȼ��������������С��0���������������ǰ�沿�֣�����0���������ں���.(˼������Ҫ����ԭ�еĳ���˳����?)
//#include "stdio.h"
//#include "stdlib.h"
//
//typedef struct Node {
//    int data;
//    struct Node* next;
//}Node;
//
//void input(Node* node) {
//    printf("����������������-1ֹͣ��");
//    int a1 = 0;
//    Node *node1 = node;
//    Node *temp;
//
//    while (a1 != -1) {
//        scanf("%d", &a1);
//        node1->data = a1;
//        node1->next = (Node*) malloc(sizeof (Node));
//        temp = node1;
//        node1 = node1->next;
//    }
//    temp->next = NULL;
//}
//
//void printlist(Node* node) {
//    while (node != NULL) {
//        printf("%d ",node->data);
//        node = node->next;
//    }
//    printf("\n");
//}
//
//Node* zhengli(Node* node) {
//    Node* node1 = (Node*) malloc(sizeof(Node));
//    Node* temp = node;
//    Node* temp1 = node1;
//    while (node != NULL) {
//        if(node->data <= 0) {
//            node1->next = (Node*) malloc(sizeof(Node));
//            node1->next->data = node->data;
//            node = node->next;
//            node1 = node1->next;
//        } else {
//            node = node->next;
//        }
//    }
//    while (temp != NULL) {
//        if (temp->data >0) {
//            node1->next = (Node*) malloc(sizeof(Node));
//            node1->next->data = temp->data;
//            temp = temp->next;
//            node1 = node1->next;
//        } else {
//            temp = temp->next;
//        }
//        node1->next = NULL;
//    }
//    return temp1->next;
//}
//
//int main() {
//    Node* node = malloc(sizeof (Node));
//    input(node);
//    printlist(node);
//    Node* temp = zhengli(node);
//    printlist(temp);
//}

//#include "stdio.h"
//#include "stdlib.h"
//
//
////����Ĵ���
//typedef struct Node {
//    int data;
//    struct Node* next;
//}Node;
//
//void createNodes(Node* node) {
//    printf("����������(������-1ʱֹͣ)\n");
//    int temp = 0;
//    Node* temp1 = node;
//    Node* temp2 = node;
//    while (temp != -1) {
//        scanf("%d", &temp);
//        if (temp == -1) {
//            break;
//        }
//        temp1->next = (Node*) malloc(sizeof(Node));
//        temp2 = temp1;
//        temp1 = temp1->next;
//
//
//        temp2->data = temp;
//
//
//    }
//    temp2->next = NULL;
//}
//
////����Ĳ���
//void findNode(Node* node, int data) {
//    int n = 0;
//    int a = 0;
//    Node* node1 = node;
//    while (node1 != NULL) {
//        n++;
//        if (node1->data == data) {
//            a = 1;
//            break;
//        }
//    }
//    if (a==1) {
//        printf("������ĵ�%dλ\n", a);
//    } else {
//        printf("û�з�������ڵ�\n");
//    }
//}
//
//
////����Ĳ���
//void input(Node* node, int data, int n) {
//    Node* node1 = node;
//    Node* temp;
//    int n1 = 0;
//    while (node1 != NULL) {
//        n1++;
//        node1 = node1->next;
//    }
//    node1 = node;
//    Node* node2 = (Node*)malloc(sizeof(Node));
//    node2->data = data;
//    if (n == 1) {
//        node2->next = node1;
//        node = node2;
//    } else if (n == n1) {
//        while (node1 != NULL) {
//            temp = node1;
//            node1 = node1->next;
//        }
//        node1 = node;
//        temp -> next = node2;
//        node2->next = NULL;
//    } else {
//        for (int i = 1; i < n-1; ++i) {
//            node1 = node1->next;
//        }
//        temp = node1->next->next;
//        node1->next = node2;
//        node2->next = temp;
//    }
//}
//
//void printlists(Node* node) {
//    Node* node1 = node;
//    while (node != NULL) {
//        printf("%d ", node->data);
//        node = node->next;
//    }
//    node = node1;
//    printf("\n");
//}
//
////���
//void delete(Node* node, int n) {
//    Node* node1 = node;
//    Node* temp;
//    int n1 = 0;
//    while (node1 != NULL) {
//        n1++;
//        node1 = node1->next;
//    }
//    node1 = node;
//    if (n == 1) {
//        node = node->next;
//        node1->next = NULL;
//    } else if (n == n1) {
//        for (int i = 1; i < n1-1; ++i) {
//            node1 = node1->next;
//        }
//        node1 -> next = NULL;
//        node1 = node;
//    } else {
//        for (int i = 1; i < n-1; ++i) {
//            node1 = node1->next;
//        }
//        node1->next = node1->next->next;
//    }
//}
//
//int main() {
//    Node* node = (Node*) malloc(sizeof(Node));
//    createNodes(node);
//    printlists(node);
//    findNode(node, 1);
//    input(node, 5, 3);
//    printlists(node);
//    delete(node,5);
//    printlists(node);
//}

