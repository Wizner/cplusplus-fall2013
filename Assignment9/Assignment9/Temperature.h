
class Temperature
{
	private:
		double celcius_;
		double fahrenheit_;

	public:
		//Constructor
		Temperature(); //default constructor
		Temperature(double, double); //overloaded

		//Accessors or getters
		double celcius();
		double fahrenheit();

		//Mutators or setters
		void set_celcius(double);
		void set_fahrenheit(double);		
};