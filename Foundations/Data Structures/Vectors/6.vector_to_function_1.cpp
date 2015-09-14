#include <iostream>
#include <vector>


double mean(double *array, size_t n)
{
    double m=0;
    for(size_t i=0; i<n; ++i){
        m += array[i];
    }
    return m/n;
}
int main(){	
	double p[] = {1, 2, 3, 4, 5};
	std::vector<double> a(p, p+5);
	
    std::cout<<mean(&a[0], 5)<<std::endl; 
	

	return 0;
}