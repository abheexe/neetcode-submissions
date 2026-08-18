class StockSpanner {
private:
    vector<int> st;
public:
    StockSpanner() {}
    
    int next(int price) {
        int count = 1;
        if(st.size() == 0){
            st.push_back(price);
            return count;
        }
        int i = st.size()-1;
        while(i >= 0 && price >= st[i]){
            count++;
            i--;
        }
        st.push_back(price);
        return count; 
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */