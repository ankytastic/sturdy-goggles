class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t r = 0;
        for (int i = 0; i < 32; ++i) {
            uint32_t bit = (n >> i) & 1;
            r |= (bit << (31 - i));
        }
        return r;
    }
};
