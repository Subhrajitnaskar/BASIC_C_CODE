#include <stdio.h>
#include <stdlib.h>  // Corrected from <malloc.h> to <stdlib.h>

struct node {
    int info;
    struct node *link;
} *start;

void create_list(int data);
void addatbeg(int data);
void addafter(int data, int pos);
void del(int data);
void display();
void count();
void rev();
void search(int data);

int main() {
    int choice, n, m, position, i;
    start = NULL;
    while (1) {
        printf("1. Create List\n");
        printf("2. Add at beginning\n");
        printf("3. Add after\n");
        printf("4. Delete\n");
        printf("5. Display\n");
        printf("6. Count\n");
        printf("7. Reverse\n");
        printf("8. Search\n");
        printf("9. Quit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                printf("How many nodes you want: ");
                scanf("%d", &n);
                for (i = 0; i < n; i++) {
                    printf("Enter the element: ");
                    scanf("%d", &m);
                    create_list(m);
                }
                break;
            case 2:
                printf("Enter the element: ");
                scanf("%d", &m);
                addatbeg(m);
                break;
            case 3:
                printf("Enter the element: ");
                scanf("%d", &m);
                printf("Enter the position after which this element is inserted: ");
                scanf("%d", &position);
                addafter(m, position);
                break;
            case 4:
                if (start == NULL) {
                    printf("List is empty\n");
                    continue;
                }
                printf("Enter the element for deletion: ");
                scanf("%d", &m);
                del(m);
                break;
            case 5:
                display();
                break;
            case 6:
                count();
                break;
            case 7:
                rev();
                break;
            case 8:
                printf("Enter the element to be searched: ");
                scanf("%d", &m);
                search(m);
                break;
            case 9:
                exit(0);  // Corrected exit function
            default:
                printf("Wrong choice\n");
        }  // End of switch
    }  // End of while
}  // End of main()

void create_list(int data) {
    struct node *q, *tmp;
    tmp = (struct node *)malloc(sizeof(struct node));
    tmp->info = data;
    tmp->link = NULL;

    if (start == NULL)  // If list is empty
        start = tmp;
    else {
        // Element inserted at the end
        q = start;
        while (q->link != NULL)
            q = q->link;
        q->link = tmp;
    }
}  // End of create_list()

void addatbeg(int data) {
    struct node *tmp;
    tmp = (struct node *)malloc(sizeof(struct node));
    tmp->info = data;
    tmp->link = start;
    start = tmp;
}  // End of addatbeg()

void addafter(int data, int pos) {
    struct node *tmp, *q;
    int i;
    q = start;
    for (i = 0; i < pos - 1; i++) {
        q = q->link;
        if (q == NULL) {
            printf("There are less than %d elements\n", pos);
            return;
        }
    }  // End of for

    tmp = (struct node *)malloc(sizeof(struct node));
    tmp->link = q->link;
    tmp->info = data;
    q->link = tmp;
}  // End of addafter()

void del(int data) {
    struct node *tmp, *q;
    if (start->info == data) {
        tmp = start;
        start = start->link;  // First element deleted
        free(tmp);
        return;
    }
    q = start;
    while (q->link != NULL) {
        if (q->link->info == data) {  // Element deleted in between
            tmp = q->link;
            q->link = tmp->link;
            free(tmp);
            return;
        }
        q = q->link;
    }
    printf("Element %d not found\n", data);
}  // End of del()

void display() {
    struct node *q;
    if (start == NULL) {
        printf("List is empty\n");
        return;
    }
    q = start;
    printf("List is:\n");
    while (q != NULL) {
        printf("%d ", q->info);
        q = q->link;
    }
    printf("\n");
}  // End of display()

void count() {
    struct node *q = start;
    int cnt = 0;
    while (q != NULL) {
        q = q->link;
        cnt++;
    }
    printf("Number of elements are %d\n", cnt);
}  // End of count()

void rev() {
    struct node *p1, *p2, *p3;
    if (start == NULL || start->link == NULL)  // Handle empty or single element
        return;

    p1 = start;
    p2 = p1->link;
    p3 = p2->link;
    p1->link = NULL;
    while (p3 != NULL) {
        p2->link = p1;
        p1 = p2;
        p2 = p3;
        p3 = p3->link;
    }
    p2->link = p1;
    start = p2;
}  // End of rev()

void search(int data) {
    struct node *ptr = start;
    int pos = 1;
    while (ptr != NULL) {
        if (ptr->info == data) {
            printf("Item %d found at position %d\n", data, pos);
            return;
        }
        ptr = ptr->link;
        pos++;
    }
    printf("Item %d not found in list\n", data);
}  // End of search()
