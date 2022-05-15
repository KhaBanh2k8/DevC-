#ifndef FEETINCHES_H
#define FEETINCHES_H
using namespace std;
class FeetInches
{
	private:
		int feet;
		int inches;
		void simplify();
	public:
		FeetInches(int f = 0, int i = 0)
		{
			feet = f;
			inches = i;
			simplify();
		}
		FeetInches(const FeetInches &obj)
		{
			feet = obj.feet;
			inches = obj.inches;
		}
		
		void setFeet(int f)
		{
			feet = f;
		}
		void setInches(int i)
		{
			inches = i;
			simplify();
		}
		int getFeet() const
		{
			return feet;
		}
		int getInches() const
		{
			return inches;
		}
		
		FeetInches operator + (const FeetInches &);
		FeetInches operator - (const FeetInches &);
		
		bool operator <= (FeetInches);
		bool operator >= (FeetInches);
		bool operator != (FeetInches);
		
		friend istream& operator >> (istream& , FeetInches &a);
		friend ostream& operator << (ostream&, FeetInches a);
		
		FeetInches multiply(FeetInches);
};
#endif
