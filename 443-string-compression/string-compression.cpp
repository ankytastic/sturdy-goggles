class Solution {
public:
  int compress(vector<char>& chars) {
    char prev = chars[0]; // Initialize prev with the first character
    int count = 1; // Initialize count to 1 (for the first character)
    for (int i = 1; i < chars.size(); i++) {
      if (chars[i] == prev) {
        count++; // Increment count for consecutive characters
      } else {
        chars[writeIdx++] = prev; // Write previous character and update writeIdx
        if (count > 1) { // Write count only if more than 1
          string countStr = to_string(count);
          for (char digit : countStr) {
            chars[writeIdx++] = digit;
          }
        }
        count = 1; // Reset count for new character
        prev = chars[i]; // Update prev for next iteration
      }
    }

    // Handle last group (if any)
    chars[writeIdx++] = prev; // Write the last character
    if (count > 1) { // Write count for the last group if applicable
      string countStr = to_string(count);
      for (char digit : countStr) {
        chars[writeIdx++] = digit;
      }
    }

    return writeIdx; // Return the new length of the compressed string
  }
private:
  int writeIdx = 0; // Index for writing the compressed string in-place (added)
};
