#include <iostream>
using namespace std; 
int main() { 	
    int pupils_count = 0, apple_count = 0;
    
    cin >> pupils_count; 
    cin >> apple_count; 	
    
    int result = apple_count % pupils_count; 
    
    cout << result << endl;
    return 0; 
}
