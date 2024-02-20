class Solution {
public:
    int findTheWinner(int n, int k) {
        int *queue = (int *)malloc(n * sizeof(int)); 
    int front = 0, rear = n-1, count = n, idx;

    for(int i = 0; i < n; ++i) {
        queue[i] = i + 1;
    }

    while(count > 1) { 
        for(int step = 1; step < k; ++step) {
            queue[++rear % n] = queue[front++ % n]; 
        }
        front++;
        count--; 
    }

    idx = front % n; 
    int winner = queue[idx]; 

    free(queue);
    return winner;
    }
}