#if !defined WRITE_FILE
#define WRITE_FILE

#include "Text.h"

#include <fstream>
using namespace std;
//! Class to write strings to a file
/*!
 * The WriteFile class accepts a const char pointer through the constructor
 * No changes are made to the data by the WriteFile class
 * The destructor closes the file and leaving strings untouched
 */
class WriteFile
{
	private:
		ofstream output_file;
		bool closed;
	   
	public:
	//!  the constructor accepts constant char pointer 
		WriteFile(const char* file_name);
	//! the destructor which does not delete the strings 
		~WriteFile();
	//! checks to see if output text file is closed
		void close();
	//! outputs a single string if text file is not closed and string length > 0
		void writeLine( String* line);
};

	
#endif
