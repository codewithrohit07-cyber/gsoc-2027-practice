#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector<int> study_hours={2,1,3,2,4};
	sort(study_hours.begin(),study_hours.end());
	int total_study_hours=0;
	float average=0.0;

	for(int hour : study_hours) {
		total_study_hours += hour; 	
    	}
	
	average = float(total_study_hours)/study_hours.size();
	cout << "total study hours : " << total_study_hours << "\n";
	cout << "average study hours : " << average << "\n";
	if (average >= 2.0) {
    		cout << "Great job! You averaged at least 2 hours per day.\n";
	} else {
    		cout << "Keep practicing! Aim for 2 hours per day.\n";
	}
	cout << "sorted hours :\n";
	for(int hour : study_hours) {
		cout << hour << " ";
	}
	return 0;
}