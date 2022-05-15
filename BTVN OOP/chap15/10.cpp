#include "FilterFile.cpp"

class Chen : public FilterFile{
	public:
		Chen()
		{
			kt =true;
		}
		char transform(char ch){
			return ch;
		}
};

int main()
{
	ifstream in;
	in.open("9.txt");
	
	ofstream out;
	out.open("chen.txt");
	Chen chen;
	chen.doFilter(in,out);
	
	out.close();
	in.close();
	return 0;
}

