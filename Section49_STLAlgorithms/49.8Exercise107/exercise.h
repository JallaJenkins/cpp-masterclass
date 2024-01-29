//YOUR IMPLEMENTATIONS WILL GO IN THE IMPLEMENTATION exercise.cpp FILE. DON'T MODIFY ANYTHING IN THIS FILE.

#ifndef EXERCISE_H
#define EXERCISE_H

class MovableStack {
public:
    MovableStack();
    ~MovableStack();
    MovableStack(const MovableStack& other);
    MovableStack(MovableStack&& other) noexcept;
    MovableStack& operator=(const MovableStack& other);
    MovableStack& operator=(MovableStack&& other) noexcept;

    void push(int value);
    int pop();
    int top() const;
    bool empty() const;
    int getSize() const;

private:
    int size;
    int capacity;
    int* data;
};

#endif // EXERCISE_H
