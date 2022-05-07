//
// Created by xxp on 2022/5/6.
//

#ifndef FIRSTPROJECT_QUEUE_H
#define FIRSTPROJECT_QUEUE_H

template<typename T>
class QueueTp {
private:
    enum {
        Q_SIZE = 10
    };
    struct Node {
        T item;
        Node *next;
    };
    //
    Node *front;
    Node *rear;
    int items;
    const int qsize;
public:
    QueueTp(int qs = Q_SIZE);

    ~QueueTp();

    bool isempty() const {
        return items == 0;
    }

    bool isfull() const {
        return items == qsize;
    }

    int queuecount() const {
        return items;
    }

    bool enqueue(const T &item);

    bool dequeue(T &item);
};

template<typename T>
QueueTp<T>::QueueTp(int qs) : qsize(qs) {
    front = rear = nullptr;
    items = 0;
}

template<typename T>
QueueTp<T>::~QueueTp() {
    Node *temp;
    while (front != nullptr) {
        temp = front;
        front = front->next;
        delete temp;
    }
}

template<typename T>
bool QueueTp<T>::enqueue(const T &item) {
    if (isfull()) {
        return false;
    }
    Node *add = new Node;
    if (front == nullptr) {
        add->item = item;
        add->next = nullptr;
        rear->next = add;
        rear = add;
    }
    items++;
    return true;
}

template<typename T>
bool QueueTp<T>::dequeue(T &item) {
    if (isempty()) {
        return false;
    }
    item = front->item;
    Node *temp;
    temp = front;
    front = front->next;
    delete temp;
    items--;
    return true;
}

#endif //FIRSTPROJECT_QUEUE_H
