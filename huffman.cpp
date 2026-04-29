#include "huffman.h"

// Print Huffman Codes
void Huffman::printCodes(Node* root, string code)
{
    if(root == NULL)
        return;

    if(root->data != '$')
    {
        cout << root->data << " : " << code << endl;
    }

    printCodes(root->left, code + "0");
    printCodes(root->right, code + "1");
}

// Build Huffman Tree
void Huffman::buildHuffman(vector<char> chars, vector<int> freq)
{
    priority_queue<Node*, vector<Node*>, compare> pq;

    // Push all characters into PQ
    for(int i = 0; i < chars.size(); i++)
    {
        pq.push(new Node(chars[i], freq[i]));
    }

    // Build tree
    while(pq.size() > 1)
    {
        Node* left = pq.top();
        pq.pop();

        Node* right = pq.top();
        pq.pop();

        Node* newNode = new Node('$', left->freq + right->freq);
        newNode->left = left;
        newNode->right = right;

        pq.push(newNode);
    }

    cout << "\nHuffman Codes:\n";
    printCodes(pq.top(), "");
}