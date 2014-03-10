#include "Loader.h"

Loader::Loader(const string path, const string extension, const unsigned int num_digits)
{
	_path = path;
	_extension = extension;
	_num_digits  = num_digits;
}

Loader::~Loader(void)
{
}

void Loader::load_path(const unsigned int cam_nr, const unsigned int frame_nr)
{
	std::stringstream ss;
    ss << std::setw(_num_digits) << std::setfill('0') << frame_nr;

	_path = ss.str();
}