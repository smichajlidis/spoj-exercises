#include <iostream>
#include <vector>
#include <cmath>
#include <string>

using namespace std;

int main() {
    
    int t, n;
    vector <int> distance {};
    vector <string> points {};
    vector <int> x {};
    vector <int> y{};
    int temp {100000000};
    int temp_num {0};
    int distance_num {};
    
    cin >> t;
    
    while (t) {
        
        cin >> n;
        
        while (n) {
            
            string point;
            int one, two {};
            
            cin >> point >> one >> two;
           
            distance.push_back(pow(one,2) + pow(two,2));
           
            x.push_back(one);
            y.push_back(two);
            points.push_back(point);
           
            n--;
        }
        cout << endl;
        
        while (!distance.empty()) {
        
            for (auto n: distance) {

                if (n < temp) {
                temp = n;
                temp_num = distance_num;
                }

                if (n == distance.back()) {
                
                    cout << points.at(temp_num) << " " << x.at(temp_num) << " " << y.at(temp_num) << endl;
                
                    points.erase(points.begin()+temp_num);
                    x.erase(x.begin()+temp_num);
                    y.erase(y.begin()+temp_num);
                    distance.erase(distance.begin()+temp_num);

                    temp_num = 0;
                    temp = 100000000;
                    distance_num = 0;
                    
                    break;
                }
                
                distance_num++;
            }
            
        }
       cout << endl;
        t--;
    }

    return 0;
    
}