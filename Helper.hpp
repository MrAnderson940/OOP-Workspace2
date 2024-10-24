#ifdef HELPER_HPP

class Helper{
private:
    
public:
    Helper(/* args */);
    / function to calculate the euclidean distance between two coordinates.
    double euclideanDistance(std::pair<int, int> item1, std::pair<int, int> item2){
        return abs(item1 + item2)
    }
    ~Helper();
};




#endif