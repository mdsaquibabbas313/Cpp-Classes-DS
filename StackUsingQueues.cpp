// Using 2 QUEUE 
class MyStack1 {
public:
    queue<int> q1,q2;
    MyStack1() {}
    
    void push(int x) {
        q2.push(x);
        
        
        while(!q1.empty()) {
            
            q2.push(q1.front());
            q1.pop();
            
        }
        
        swap(q1,q2);
    }
    
    int pop() {
        int x;
        
        if(!q1.empty()) {
            
            x = q1.front();
            q1.pop();
            
        }
        
        return x;
    }
    
    int top() {
        
        // int x ;
        
        if(!q1.empty()) {
            
            return q1.front(); 
            
        }
        return -1;
    }
    
    bool empty() {
        return q1.empty() == true ? true : false;
    }
};

// Using 1 QUEUE;
class MyStack {
public:
    queue<int> q1;
    MyStack() {}
    
    void push(int x) {
        
        q1.push(x);
        int size = q1.size();
        int k = size - 1;
        while(k--) {
            
            int x = q1.front();
            
            q1.pop();
            
            q1.push(x);
            
        }
        
    }
    
    int pop() {
       
        int x;
        
       if(!q1.empty()) {
           
            x = q1.front();
        
            q1.pop();
           
       }
        
        
        return x;
        
        
    }
    
    int top() {
        
        int x;
        if(!q1.empty())  x = q1.front();
        return x;
       
    }
    
    bool empty() {
        return q1.empty() == true ? true : false;
    }
};


/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */
