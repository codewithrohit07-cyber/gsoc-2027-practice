#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int calculate_total(const std::vector<int>& hours) {
    int total = 0;

    for (int hour : hours) {
        total += hour;
    }

    return total;
}

double calculate_average(const std::vector<int>& hours) {
	double average = 0.0;
	if(hours.empty()){
	    return average;
	}
	int total = calculate_total(hours);
	return static_cast<double>(total)/hours.size(); 
}

int main() {
	vector<int> study_hours={};
	cout << "total hours : " << calculate_total(study_hours) << endl;
	cout << "average hours : " << calculate_average(study_hours) << endl;
	return 0;
}