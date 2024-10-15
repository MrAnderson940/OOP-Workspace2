// parant class for many classes
// will hold data for amount of fuel percentage, fuel efficiency (km/l), weight and max load

class plane{
private:
    double fuelPercentage, weight, maxLoad, fuelEfficiency;
public:
    plane();
    ~plane();
    void set_fuelPercentage(double f);
    void set_weight(double w);
    void set_maxLoad(double m);
    void set_fuelEfficiency(double f);
    double get_fuelPercentage();
    double get_weight();
    double get_maxLoad();
    double get_fuelEfficiency();

};