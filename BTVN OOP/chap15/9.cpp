#include "FilterFile.cpp"

class MaHoa : public FilterFile{
	public:
		char transform(char ch)
		{
			return ch*2;
		}
};
class VietHoa: public FilterFile{
	public:
		char transform(char ch)
		{
			return toupper(ch);
		}
};

class Coppy : public FilterFile{
	public:
		char transform(char ch)
		{
			return ch;
		}
};

int main()
{
	ifstream in;
	in.open("9.txt");
	ofstream out;
	out.open("mahoa.txt");
	MaHoa mahoa;
	mahoa.FilterFile::doFilter(in,out);
	out.close();
	
	out.open("viethoa.txt");
	VietHoa viethoa;
	viethoa.doFilter(in,out);
	out.close();
	
	out.open("coppy.txt");
	Coppy coppy;
	coppy.doFilter(in,out);
	out.close();

	in.close();
	return 0;
}

