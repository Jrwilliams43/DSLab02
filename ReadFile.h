#if !defined READ_FILE
#define READ_FILE

#include "Text.h"

#include <fstream>
using namespace std;
//!Class to read lines in from a text document and store them as strings which get returned somewhere else
/*!
 *The ReadFile class accepts a const char pointer through its constructor
 *No changes are made to text file
 *The destructor closes the file and leaving strings untouched
 */
class ReadFile
{
	private:
		ifstream input_file;
		bool _eof;
		bool closed;
   
	public:
	//!  the constructor accepts constant char pointer 
		ReadFile(const char* file_name);
	//! the destructor which does not delete the strings 
		~ReadFile();
	//! checks to see if  has been read to end of file
		bool eof();
	//! checks to see if text file is closed
		void close();
	//! returns line of text file as string
		String* readLine();
		
};


#endif
