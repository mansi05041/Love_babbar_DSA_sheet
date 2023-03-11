// A structure to represent a queue
class Queue{
    int front, rear, size;
    unsigned capacity;
    int* array;
};

// function to create a queue of given capacity
Queue* createQueue(unsigned capacity){
    Queue* queue = new Queue();
    queue->capacity = capacity;
    queue->front = queue->size = 0;
    queue->rear = capacity-1;
    queue->array = new int [queue->capacity];
    return queue;
}

// function to check when queue is full
bool isFull(Queue *queue){
    return(queue->size==queue->capacity);
}

// function to check when queue is empty
bool isEmpty(Queue *queue){
    return(queue->size ==0);
}  

// Function to add an item to the queue
void enqueue(Queue* queue, int item){
    if(isFull(queue)) return;
    queue->rear = (queue->rear+1)%queue->capacity;
    queue->array[queue->rear]=item;
    queue->size = queue->size+1;
}

// Function to remove an item from queue
int dequeue(Queue* queue){
    if(isEmpty(queue)) return INT_MIN;
    int item = queue->array[queue->front];
    queue->front = (queue->front+1)%queue->capacity;
    queue->size = queue->size-1;
    return item;
}

// Function to get front of queue
int front(Queue* queue){
    if(isEmpty(queue)) return INT_MIN;
    return queue->array[queue->front];
}

// Function to get rear of queue
int rear(Queue* queue){
    if(isEmpty(queue)) return INT_MIN;
    return queue->array[queue->rear];
}