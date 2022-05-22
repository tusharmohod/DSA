struct TwoStacks { 
    int* arr; 
    int cap; 
    int top1, top2; 
    
    TwoStacks(int n) { 
        cap = n; 
        arr = new int[n]; 
        top1 = -1; 
        top2 = cap; 
    } 
  
    void push1(int x) { 
        if (top1 == top2 - 1) {
            cout << "Stack Overflow"; 
            exit(1); 
        } 
        top1++; 
        arr[top1] = x;
    } 
  
    void push2(int x) { 
        if (top1 == top2 - 1) { 
            cout << "Stack Overflow"; 
            exit(1); 
        } 
        top2--; 
        arr[top2] = x; 
    } 
  
    int pop1() { 
        if (top1 == -1) { 
            cout << "Stack UnderFlow"; 
            exit(1);
        }
        int x = arr[top1]; 
        top1--; 
        return x;  
    } 
  
    int pop2() { 
        if (top2 == cap) {
            cout << "Stack UnderFlow"; 
            exit(1); 
        } 
        int x = arr[top2]; 
        top2++; 
        return x;
    } 
};