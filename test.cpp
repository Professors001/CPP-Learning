#include <iostream>
using namespace std;

class Transportation
{
	public:
		virtual double fare() = 0;
};

class Taxi : public Transportation
{
	private:
		double distance;
	public:
		Taxi() {distance = 0;}
		void setDistance(double d) { 
			distance = d; 
		}
		virtual double fare() {
			double fare = 35;
			if(distance > 0) { 
				fare += (distance * 2); 
			} 
		return fare; }
};

class BmtaBus : public Transportation
{
	public:
		virtual double fare() {return 6.5;}
};

class BTS : public Transportation
{
	private:
		int stations;
	public:
		void setStation(int n) {stations = n;}
		virtual double fare() {return 15 + (stations * 5);}
};

class Passenger
{
	private:
		double fare;
	public:
		Passenger() {fare = 0;}
		void addTransportation(Transportation &newT) {
			this->fare += newT.fare();
		} 
		double getTotalFare() {return fare;}
};

int main()
{
    Passenger passenger;
    while(1) {
        char transportType;
        cin >> transportType;
        if (transportType == 'A') {
            Taxi *taxi = new Taxi();
            double distance;
            cin >> distance;
			taxi->setDistance(distance);
			passenger.addTransportation(*taxi);
			delete(taxi);
        } else if (transportType == 'B') {
            BmtaBus *bus = new BmtaBus();
            passenger.addTransportation(*bus);
            delete(bus);
        } else if (transportType == 'C') {
            BTS *bts = new BTS();
            int station;
            cin >> station;
            bts->setStation(station);
			passenger.addTransportation(*bts);
            delete(bts);
        } else {
            break;
        }
    }
    cout << "Total Fare: " << passenger.getTotalFare() << endl;
}