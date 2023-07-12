#include <stdio.h>

class Stack{
    int a[100];
    int stkTP1;
    int stkTP2;

public:
    Stack(int N = 100) {
        for (int i = 0; i < N; i++) {
            a[i] = -1;
        }
        stkTP1 = -1;
        stkTP2 = 49;
    }

    void push1(int data) {
        if (stkTP1 > 49) {
            printf("Stack overflow\n");
        } else {
            stkTP1++;
            a[stkTP1] = data;
        }
    }

    void pop1() {
        if (stkTP1 == -1) {
            printf("Stack underflow\n");
        } else {
            printf("%d\n", a[stkTP1]);
            stkTP1--;
        }
    }

    void push2(int data) {
        if (stkTP2 > 100) {
            printf("Stack overflow\n");
        } else {
            stkTP2++;
            a[stkTP2] = data;
        }
    }

    void pop2() {
        if (stkTP2 == 49) {
            printf("Stack underflow\n");
        } else {
            printf("%d\n", a[stkTP2]);
            stkTP2--;
        }
    }
};

int main() {
    Stack s;
    int choice;
    do
    {
        
    printf("ops: 1.push1\t2.pop1\t3.push2\t4.pop2\nEnter the choice:");
    scanf("%d", &choice);
    switch (choice) {
        case 1: {
            int data;
            printf("Enter the data:");
            scanf("%d", &data);
            s.push1(data);
            break;
        }

        case 2:
            s.pop1();
            break;

        case 3: {
            int data2;
            printf("Enter the data:");
            scanf("%d", &data2);
            s.push2(data2);
            break;
        }

        case 4:
            s.pop2();
            break;

        default:
            printf("Invalid choice\n");
            break;
    }
    } while (choice<5);
    

    return 0;
}
