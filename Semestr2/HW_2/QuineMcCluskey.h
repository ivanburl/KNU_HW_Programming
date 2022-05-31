//Розробити класи для методу Блейка(Порецького).

// Blake method is not efficient as computer algorithm,
// however its analoge QuineMcCluskey is excellent variant

#include<bits/stdc++.h>
using namespace std;


//trying to implement functional interface for parsing string
class BinaryEquation {
public:
	BinaryEquation(std::function<bool()> gauge) {
		this->_gauge = gauge;
	}

	void calculate() {
		bool g = _gauge();
	}
private:
	std::function<double()> _gauge;
};

//BinaryEquation *ex1 = new BinaryEquation( [] {
//
//}
// ex1->calculate()


class QuineMcCluskey
{
    private:
        vector<set<Element, ElementComparator>>  table;//== vector.size = cntOfArguments
        int MAXX;// == (1<<cntOfArguments)-1;
public:
    QuineMcCluskey(const string &equation, vector<char> &variables);
    QuineMcCluskey(BinaryEquation *bin_eq);
    void minimizeFunction();
    string getMinimizedFunction();
private:
    bool isMergeable();
    Element merge(const Element &a, const Element &b);
    void computeAllPossibleVariants();
};


class Element {
    private:
        int countOfBits;
        int setBits, unsetBits;
    public:
        int getCountOfBits();
        int getSettedBits();
        int getUnsettedBits();
};

struct ElementComparator {
    bool operator() (Element a, Element b) const {

    }
};

//I hate C++ OOP principles