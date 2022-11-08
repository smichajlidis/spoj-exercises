#include <iostream>

int main() {
    int t, n, count {0};
    std::cin>>t;
    for(int i {0}; i<t; i++) {
        std::cin >> n;
        switch (n) {
            case 1: case 2: case 3: case 4: case 5: case 6: case 7: case 8: case 9: std::cout<<n<<" 0\n"; break;
            case 10: case 20: case 30: case 40: case 50: case 60: case 70: case 80: std::cout<<n+(n/10)<<" 1\n"; break;
            case 11: case 22: case 33: case 44: case 55: case 66: case 77: std::cout<<n<<" 0\n"; break;
            case 29: case 38: case 47: case 56: case 65: case 74: std::cout<<"121 1\n"; break;
            case 19: case 28: case 37: case 46: case 64: case 73: std::cout<<"121 2\n"; break;
            case 39: case 48: case 57: case 75: std::cout<<"363 2\n"; break;
            case 49: case 58: case 67: case 76: std::cout<<"484 2\n"; break;
            case 69: case 78: std::cout<<"4884 4\n"; break;
            case 68: case 59: std::cout<<"1111 3\n"; break;
            case 79: std::cout<<"44044 6\n"; break;
            default: std::cout<<((n/10)+(n%10))*10+((n/10)+(n%10))<<" 1\n"; break;
        }
    }
    return 0;
}