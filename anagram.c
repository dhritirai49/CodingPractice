#include <stdbool.h>
#include <string.h>

bool isAnagram(char* s, char* t) {
    int lenS = strlen(s);
    int lenT = strlen(t);
    if (lenS != lenT) return false;      // different lengths

    int count[26] = {0};                 // 'a' to 'z'

    for (int i = 0; i < lenS; i++) {
        count[s[i] - 'a']++;             // count chars in s
        count[t[i] - 'a']--;             // remove chars from t
    }

    for (int i = 0; i < 26; i++) {
        if (count[i] != 0) return false; // mismatch in frequency
    }
    return true;
}
