class ProductOfNumbers {
private:
    std::vector<int> prefix;
    int lastZeroIdx;

public:
    ProductOfNumbers() {
        prefix.push_back(1);
        lastZeroIdx = -1;
    }

    void add(int num) {
        if (num == 0) {
            prefix.push_back(1);
            lastZeroIdx = static_cast<int>(prefix.size()) - 1;
        } else {
            int lastProduct = prefix.back();
            prefix.push_back(lastProduct * num);
        }
    }

    int getProduct(int k) {
        int n = static_cast<int>(prefix.size());
        if (n - k - 1 < lastZeroIdx) {
            return 0;
        }
        return prefix[n - 1] / prefix[n - k - 1];
    }
};
