#include <iostream>
#include <iomanip>
#include <sstream>

using namespace std;

class Loader
{
public:
	Loader(const string path, const string extension, const unsigned int num_digits);
	~Loader(void);

	void load_path(const unsigned int cam_nr, const unsigned int frame_nr); 

private:
	 string _path;
	 string _extension;
	 unsigned int _num_digits;
	const string _full_path;
};
