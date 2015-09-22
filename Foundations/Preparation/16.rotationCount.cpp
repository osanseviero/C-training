#include <iostream>
#include <vector>
#include <sstream>
using namespace std;


int rotationCount(vector<int> A) {
	int n = A.size();
	int low = 0;
	int high = n-1;
	int mid;
	int next, prev;
	// If already sorted
	while(low <= high){
		// If it is already osrted
		if(A[low] <= A[high]){
			return A[low];
		}
		mid = (low+high)/2;
		next = (mid+1)%n;
		prev = (mid+n-1)%n;

		if(A[mid] <= A[next] && A[mid] <= A[prev])
			return A[mid];
		else if(A[mid]<=A[high])
			high = mid-1;
		else if(A[mid] >= A[low])
			low = mid+1;
	}
	return -1;
}

int main(){ 
	int x[] = { 40342, 40766, 41307, 42639, 42777, 46079, 47038, 47923, 48064, 48083, 49760, 49871, 51000, 51035, 53186, 53499, 53895, 59118, 60467, 60498, 60764, 65158, 65838, 65885, 65919, 66638, 66807, 66989, 67114, 68119, 68146, 68584, 69494, 70914, 72312, 72432, 74536, 77038, 77720, 78590, 78769, 78894, 80169, 81717, 81760, 82124, 82583, 82620, 82877, 83131, 84932, 85050, 85358, 89896, 90991, 91348, 91376, 92786, 93626, 93688, 94972, 95064, 96240, 96308, 96755, 97197, 97243, 98049, 98407, 98998, 99785, 350, 2563, 3075, 3161, 3519, 4176, 4371, 5885, 6054, 6495, 7218, 7734, 9235, 11899, 13070, 14002, 16258, 16309, 16461, 17338, 19141, 19526, 21256, 21507, 21945, 22753, 25029, 25524, 27311, 27609, 28217, 30854, 32721, 33184, 34190, 35040, 35753, 36144, 37342};
	std::vector<int> problem(x, x + sizeof x / sizeof x[0]);
	
    cout << rotationCount(problem) << endl;
    return 0;
}


