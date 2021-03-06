#include <iostream>
#include <vector>


int main(){	
	std::vector<double> a;
    std::vector<double>::const_iterator i;
    const double *p;

    a.push_back(1);
    a.push_back(2);
    a.push_back(3);
    a.push_back(4);
    a.push_back(5);

    for(i=a.begin(); i!=a.end(); ++i){
        std::cout<<(*i)<<std::endl;
    }
	
    for(p=&a[0]; p!=&a[0]+5; ++p){
        std::cout<<(*p)<<std::endl;
    }

	return 0;
}