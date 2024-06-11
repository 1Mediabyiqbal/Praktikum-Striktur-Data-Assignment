#include <iostream>
#include <queue>
using namespace std;

struct TNode {
    int data;
    TNode *left;
    TNode *right;

    // Constructor
    TNode(int value) {
        data = value;
        left = NULL;
        right = NULL;
    }
};

void preOrder(TNode *_68node) {
    if (_68node != NULL) {
        cout << _68node->data << " ";
        preOrder(_68node->left);
        preOrder(_68node->right);
    }
}

void inOrder(TNode *_68node) {
    if (_68node != NULL) {
        inOrder(_68node->left);
        cout << _68node->data << " ";
        inOrder(_68node->right);
    }
}

void postOrder(TNode *_68node) {
    if (_68node != NULL) {
        postOrder(_68node->left);
        postOrder(_68node->right);
        cout << _68node->data << " ";
    }
}

void printChild(TNode *_68node) {
    if (_68node != NULL) {
        cout << "Anak Dari " << _68node->data << " : ";
        if (_68node->left != NULL) {
            cout << _68node->left->data << " ";
        }
        if (_68node->right != NULL) {
            cout << _68node->right->data << " ";
        }
        if (_68node->left == NULL && _68node->right == NULL) {
            cout << "Tidak Ada Anak.";
        }
        cout << endl;
    }
}

void printDescendant(TNode *_68node) {
    if (_68node != NULL) {
        if (_68node->left != NULL || _68node->right != NULL) {
            cout << "Turunan Dari " << _68node->data << " : ";
            queue<TNode*> q;
            if (_68node->left != NULL) q.push(_68node->left);
            if (_68node->right != NULL) q.push(_68node->right);
            while (!q.empty()) {
                TNode* temp = q.front();
                q.pop();
                cout << temp->data << " ";
                if (temp->left != NULL) q.push(temp->left);
                if (temp->right != NULL) q.push(temp->right);
            }
            cout << endl;
        } else {
            cout << "Turunan Dari " << _68node->data << " : Tidak Ada Turunan." << endl;
        }
    }
}

TNode* findNode(TNode* _68node, int value) {
    if (_68node == NULL) return NULL;
    if (_68node->data == value) return _68node;
    TNode* foundNode = findNode(_68node->left, value);
    if (foundNode == NULL) {
        foundNode = findNode(_68node->right, value);
    }
    return foundNode;
}

int main() {
    int _68n;
    cout << "Masukkan Jumlah Node : ";
    cin >> _68n;

    TNode *_68root = NULL;

    for (int i = 0; i < _68n; i++) {
        int _68value;
        cout << "Masukkan Nilai Node " << i + 1 << " : ";
        cin >> _68value;

        TNode *_68node = new TNode(_68value);

        if (_68root == NULL) {
            _68root = _68node;
        } else {
            // Temukan Node Induk
            int _68parentValue;
            cout << "Masukkan Node Induk Dari " << _68value << " : ";
            cin >> _68parentValue;
            TNode *_68parent = findNode(_68root, _68parentValue);
            if (_68parent == NULL) {
                cout << "Node Induk Tidak Dapat Ditemukan!" << endl;
                delete _68node;
                i--;
                continue;
            }
            if (_68parent->left == NULL) {
                _68parent->left = _68node;
            } else if (_68parent->right == NULL) {
                _68parent->right = _68node;
            } else {
                cout << "Node Induk Sudah Memiliki Dua Anak!" << endl;
                delete _68node;
                i--;
            }
        }
    }

    cout << "\nTraversal Pre-Order      : ";
    preOrder(_68root);
    cout << endl;

    cout << "Traversal In-Order       : ";
    inOrder(_68root);
    cout << endl;

    cout << "Traversal Post-Order     : ";
    postOrder(_68root);
    cout << endl;

    for (int i = 0; i < _68n; i++) {
        printChild(findNode(_68root, i + 1));
    }
    cout << endl;

    for (int i = 0; i < _68n; i++) {
        printDescendant(findNode(_68root, i + 1));
    }
    cout << endl;

    return 0;
}