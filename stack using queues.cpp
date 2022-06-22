/*

STACK USING QUEUES */
void push(int x) {
       q1.push(x);
        while(!q2.empty()){
            q1.push(q2.front());
            q2.pop();
        }
        swap(q1,q2);
    }
    
    int pop() {
      int a;
        if(q2.empty())
        {
            return -1;
        }
         a=q2.front();
            q2.pop();
        return a;
    }
    
    int top() {
        int a;
        if(q2.empty())
        {
            return -1;
        }
         a=q2.front();
        return a; 
    }
    
    bool empty() {
        if(q2.size()==0)
            return true;
        else 
            return false;
    }
