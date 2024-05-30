#include <iostream>
using namespace std;

class Queues {
private:
    static const int max = 3;
    int FRONT, REAR;
    int queue_array[max];

public:
    Queues() {
        FRONT = -1;
        REAR = -1;
    }

    void insert() {
        int num;
        cout << "Enter a number : ";
        cin >> num;
        cout << endl;

        if ((FRONT == 0 && REAR == max - 1) || (FRONT == REAR +1)) {
            cout << "\nQueue overflow\n";
            return;
        }

        if (FRONT == -1) {
            FRONT = 0;
            REAR = 0;
        }
        else {
            if (REAR == max - 1)
                REAR = 0;
            else
                REAR = REAR + 1;
        }
        queue_array[REAR] = num ;
    }

    void remove () {
        if (FRONT == -1) {
            cout << "Queue underflow\n";
            return;
        }
        cout << "\nThe Element deleted from the queue is : " << queue_array[FRONT] << "\n";

        if (FRONT == REAR) {
            FRONT = -1;
            REAR = -1;
        }
        else {
            if (FRONT == max - 1)
                FRONT = 0;
            else
                FRONT = FRONT + 1 ;
        }
    }
};

void display () {
    
}

int main () {

}