#include<bits/stdc++.h>
using namespace std;

// bai10 dem so dong
int cnt=0;
// kiem tra xem co dang chay bai10 hay ko ?
bool kt = false;
class FilterFile{
	public:
		virtual char transform(char ch) = 0;
		void doFilter(ifstream &in, ofstream &out)
		{
			in.clear();
			in.seekg(0,ios::beg);
			while(!in.eof())
			{
				string s; getline(in,s);
				for(char &x : s)
				{
					if((x >= 'a' && x <= 'z') || (x >= 'A' && x <= 'Z'))
						x = transform(x);
				}
				out << s << endl;
				if(kt)
				{
					cnt++;
					if(cnt % 2 == 0) 
						out << endl;
				}
			}
			
		}

};

//char ch = ' ';                    // Holds a single character
//		    char transChar = ' ';        // Holds a transformed character
//		
//		    in.get(ch);
//		
//		    while (!in.fail())
//		    {
//		        transChar = transform(ch);
//		
//		        out.put(transChar);
//		        in.get(ch);       
//		    }
