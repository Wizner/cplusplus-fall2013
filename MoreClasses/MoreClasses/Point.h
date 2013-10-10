
class Point
{
	private:
		double latitude_;
		double longitude_;

	public:
		//Constructor
		Point(); //default constructor
		Point(double, double); //overloaded

		//Accessors or getters
		double latitude();
		double longitude();

		//Mutators or setters
		void set_latitude(double);
		void set_longitude(double);

		static double random_latitude();
		static double random_longitude();
		static Point random_point();
};