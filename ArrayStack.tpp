template <typename T>
ArrayStack<T>::ArrayStack(int i) {
    // TODO copy constructor
    maxSize = i;
    buffer = new T[maxSize];
    this->length = 0;
}

template <typename T>
ArrayStack<T>::ArrayStack(const ArrayStack<T>& copyObj) {
    copy(copyObj);
}

template <typename T>
ArrayStack<T>& ArrayStack<T>::operator=(const ArrayStack<T>& rightObj) {
    if (this != &rightObj) {
        clear();
        copy(rightObj);
    }
    return *this;
}

template <typename T>
ArrayStack<T>::~ArrayStack() {
    clear();
}

template <typename T>
void ArrayStack<T>::clear() {
    // TODO remove all elements in the stack, resetting to the initial state
    delete[] buffer;
    this->length = 0;
}

template <typename T>
void ArrayStack<T>::copy(const ArrayStack<T>& copyObj) {
    maxSize = copyObj.maxSize;
    this->length = copyObj.length;

    buffer = new T[maxSize];

    for(int i = 0; i < this->length; i++) {
        buffer[i] = copyObj.buffer[i];
    }
}

template <typename T>
int ArrayStack<T>::getLength() const {
    return this->length;
}

template <typename T>
int ArrayStack<T>::getMaxSize() const {
    return maxSize;
}

template <typename T>
bool ArrayStack<T>::isEmpty() const {
    return this->length == 0;
}

template <typename T>
bool ArrayStack<T>::isFull() const {
    return this->length == maxSize;
}

template <typename T>
T ArrayStack<T>::peek() const {
    // TODO return the element at the top of the stack
    if (this->length == 0) {
        throw string("Stack is empty");
    }
    
    return buffer[this->length - 1];
}

template <typename T>
void ArrayStack<T>::pop() {
    // TODO remove the top element from the stack
    if (this->length == 0) {
        throw string("Stack is empty");
    }

    this->length--;
}

template <typename T>
void ArrayStack<T>::push(const T& elem) {
    // TODO add the argument to the top of the stack
    if (this->length >= maxSize) {
        throw string("Over max size of array");
    }

    buffer[this->length] = elem;

    this->length++;
}

template <typename T>
void ArrayStack<T>::rotate(typename Stack<T>::Direction dir) {
    // TODO rearranges the elements in the stack according to the argument
    // A right rotate moves the top to the bottom
    // A left rotate moves the bottom to the top

    if (this->length <= 1) {
        return;
    }

    if (dir == Stack<T>::LEFT) {
        T temp = buffer[0];
        
        for (int i = 0; i < this->length - 1; i++) {
            buffer[i] = buffer[i + 1]; 
        }

        buffer[this->length - 1] = temp;
    }
    else if (dir == Stack<T>::RIGHT) {
        T temp = buffer[this->length - 1]; 

        for (int i = this->length - 1; i > 0; i--) {
            buffer[i] = buffer[i - 1];
        }

        buffer[0] = temp;
    }

    else {
        throw string("Invalid direction");
    }
}

template <typename T>
ostream& operator<<(ostream& outStream, const ArrayStack<T>& myObj) {
    if (myObj.isEmpty()) {
        outStream << "Stack is empty, no elements to display.\n";
    }
    else {
        for (int i = myObj.length - 1; i >= 0; i--) {
            outStream << (i == myObj.length - 1 ? "top\t" : "\t")
                      << myObj.buffer[i] << endl;
        }
    }

    return outStream;
}
