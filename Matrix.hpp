#include <iostream>
#include <vector>

namespace zich
{
	class Matrx;

} 

class Matrix
{

private:
	std::vector<std::vector<double>> mat; 

public:
	
	Matrix(std::vector<double> vec, int r, int c);

	Matrix operator+(const double &scalar) const;
	Matrix &operator+=(const double &scalar);
	const Matrix operator+() const;
	Matrix operator-(const double &scalar) const;
	Matrix &operator-=(const double &scalar);
	const Matrix operator-() const;
	friend Matrix operator-(const int &scalar, const Matrix &mat);
	Matrix operator-(const Matrix &mat) const;
	Matrix &operator-=(const Matrix &mat);
	Matrix operator*(const double &scalar) const;
	Matrix &operator*=(const double &scalar);
	bool operator<(const Matrix &mat) const;
	bool operator>(const Matrix &mat) const;
	bool operator<=(const Matrix &mat) const;
	bool operator>=(const Matrix &mat) const;
	friend Matrix operator*(const int &scalar, const Matrix &mat);
	Matrix operator*(const Matrix &mat) const;
	Matrix &operator*=(const Matrix &mat);
	bool operator==(const Matrix &mat) const;
	bool operator!=(const Matrix &mat) const;
	Matrix &operator++();	 
	Matrix &operator++(int);
	friend Matrix operator+(const int &scalar, const Matrix &mat);
	Matrix operator+(const Matrix &mat) const;
	Matrix &operator+=(const Matrix &mat); 
	Matrix &operator--();
	Matrix &operator--(int); 
	friend std::ostream &operator<<(std::ostream &out, const Matrix &mat);
	friend std::istream &operator>>(std::istream &in, const Matrix &mat);
    ~Matrix();
};