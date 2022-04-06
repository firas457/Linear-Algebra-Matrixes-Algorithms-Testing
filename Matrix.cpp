#include <iostream>
#include <vector>
#include "Matrix.hpp"


  std::vector<double> identity = {1, 0, 0, 0, 1, 0, 0, 0, 1};
   Matrix mat_{identity, 3, 3};  

Matrix::Matrix(std::vector<double> vec, int r, int c) {}
Matrix::~Matrix() {}
Matrix &Matrix::operator*=(const double &scalar) {return *this;}
Matrix operator*(const int &scalar, const Matrix &mat) {return mat_;}
Matrix Matrix::operator*(const Matrix &mat) const {return mat_;}
Matrix &Matrix::operator*=(const Matrix &mat) {return *this;}
bool Matrix::operator>(const Matrix &mat) const {return true;}
bool Matrix::operator<(const Matrix &mat) const {return true;}
bool Matrix::operator<=(const Matrix &mat) const {return true;}
std::ostream &operator<<(std::ostream &out, const Matrix &mat) {return out;}
std::istream &operator>>(std::istream &in, const Matrix &mat) {return in;}
bool Matrix::operator>=(const Matrix &mat) const {return true;}
bool Matrix::operator==(const Matrix &mat) const {return true;}
bool Matrix::operator!=(const Matrix &mat) const {return true;}
Matrix &Matrix::operator++() {return *this;}    
Matrix &Matrix::operator++(int) {return *this;} 
Matrix &Matrix::operator--() {return *this;}    
Matrix &Matrix::operator--(int) {return *this;} 
Matrix Matrix::operator+(const double &scalar) const {return mat_;}
Matrix &Matrix::operator+=(const double &scalar) {return *this;}
const Matrix Matrix::operator+() const {return *this;}
Matrix operator+(const int &scalar, const Matrix &mat) {return mat_;}
Matrix Matrix::operator+(const Matrix &mat) const {return mat_;}
Matrix &Matrix::operator+=(const Matrix &mat) {return *this;}
Matrix Matrix::operator-(const double &scalar) const {return mat_;}
Matrix &Matrix::operator-=(const double &scalar) {return *this;}
const Matrix Matrix::operator-() const {return *this;}
Matrix operator-(const int &scalar, const Matrix &mat) {return mat_;}
Matrix Matrix::operator-(const Matrix &mat) const {return mat_;}
Matrix &Matrix::operator-=(const Matrix &mat) {return *this;}
Matrix Matrix::operator*(const double &scalar) const {return mat_;}
