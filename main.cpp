#include <iostream>
#include <cstdio>

using namespace std;

struct node {
    int data;
    struct node *left;
    struct node *right;
};

void inorder(struct node *r) {
    if (r) {
        inorder(r->left);
        cout << r->data << " ";
        inorder(r->right);
    }
}
struct node *insert(struct node *r, int d) {
    if (r == NULL) {
        r = (struct node *)malloc(sizeof(struct node));
        r->data = d;
        r->left = NULL;
        r->right = NULL;
    } else if (d < r->data) {
        r->left = insert(r->left, d);
    } else if (d > r->data) {
        r->right = insert(r->right, d);
    }
    return r;
}

int main() {
    int n, i, data;
    struct node *root = NULL;
    cout << "輸入總數量: ";
    cin >> n;
    cout << "輸入元素: ";
    for (i = 0; i < n; i++) {
        cin >> data;
        root = insert(root, data);
    }
    inorder(root);
    return 0;
}
