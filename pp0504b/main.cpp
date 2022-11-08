#include <iostream>
#include <cstring>

#define T_SIZE 100001

using namespace std;

char* string_merge(char *, char *);

int main() {
    
    int t {};
    char s1[T_SIZE], s2[T_SIZE], *s;
    cin >> t;
    
    while (t--) {
        cin >> s1 >> s2;
        s = string_merge(s1, s2);
        cout << s << endl;
        delete [] s;
    }
    
    return 0;
}

char* string_merge(char *s1, char *s2) {
    
    int len1 = strlen(s1);
    int len2 = strlen(s2);
    
    int minlen = min(len1, len2);
    int resultlen = (minlen * 2) + 1;
    
    char* result {nullptr};
    result = new char[resultlen];
    
    int index {0};
    
    for (int i {0}; i < minlen; i++) {
        
        result[index] = s1[i];
        index++;
        result[index] = s2[i];
        index++;
        
    }
    
    result[index] = '\0';
    
    return result;
    
}