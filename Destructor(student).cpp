class Student 
{
	public: 
	 Student ()
	 {
	 	semesterHours = 0;
	 	gpa = 0.0;
	 }
	 ~Student()
	 {
	 	// ...whatever assets are returned here...
	 }
	protected:
	 int semesterHours;
	 float gpa; 
};

