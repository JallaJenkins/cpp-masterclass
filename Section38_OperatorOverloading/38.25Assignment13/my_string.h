#pragma once
#include <iostream>
#include <cstring>

namespace CU{

class string{
	friend std::ostream& operator<< (std::ostream& out , const CU::string& s);
	friend string operator+(const string& left, const string& right);
	friend string& operator+=(string& left, const string& right);
	public : 
	 string(const char* data, size_t size = 15 ){
		m_size = size;
		m_data = new char [m_size];
		std::strcpy(m_data,data );
	}

	//Copy constructor
	string(const string& source){
		m_size = source.m_size;
		m_data = new char [m_size]; // We want to do deep copy here.
		std::strcpy(m_data,source.m_data);
	}

	//Copy assignment operator
	string& operator= (const string& right_operand){
		std::cout << "Copy assignment operator called" << std::endl;
		if(this != & right_operand){
			delete[] m_data;
			m_data = new char [right_operand.m_size];
			std::strcpy(m_data,right_operand.m_data);
		}
		return *this;
	}

	// Clear method
	void clear() {
		m_size = 0;
		delete [] m_data;
		m_data = nullptr;
	}

	// Insert methods
	string& insert(size_t index, const char* s, size_t count) {
		char* new_data = new char [m_size + count];
		
		for(size_t i{}; i < index; ++i) {
			new_data[i] = m_data[i];
		}

		for(size_t i{index}; i < index + count; ++i) {
			new_data[i] = s[i - index];
		}

		for(size_t i{index + count}; i < m_size + count; ++i) {
			new_data[i] = m_data[i - count];
		}

		new_data[m_size + count] = '\0';

		m_size += count;
		delete[] m_data;
		m_data = new char [m_size];
		std::strcpy(m_data,new_data);
		delete[] new_data;

		return *this;
	}

	// Append method
	string& append(const char* s, size_t count) {
		this->insert(m_size, s, count);
		return *this;
	}

	string& erase(size_t begin, size_t end) {
		if(begin >= end || end > m_size) {
			std::cout << "Cannot perform erase: improper indices\n";
			return *this;
		}

		size_t count = end - begin;
		char* new_data = new char [m_size - count];

		for(size_t i{}; i < begin; ++i) {
			new_data[i] = m_data[i];
		}

		for(size_t i{end}; i < m_size; ++i){
			std::cout << "Adding " << m_data[i] << '\n';
			new_data[i - begin - 1] = m_data[i];
		}

		new_data[m_size - count] = '\0';
		m_size -= count;

		m_data = new char [m_size];
		std::strcpy(m_data,new_data);
		delete[] new_data;

		return *this;
	}

	int compare(const string& compare_string) const {
		return std::strcmp(this->m_data, compare_string.m_data);
	}
	
	const char* c_str() const{
		return m_data;
	}

	~string(){
		delete [] m_data;
		m_data = nullptr;
	}
	private : 
	 unsigned int m_size;
	 char * m_data{nullptr};
};

	inline std::ostream& operator<< (std::ostream& out , const CU::string& s){
		out << s.m_data;
		return out;
	}

	inline string operator+(const string& left, const string& right){
		string tmp(left);
		tmp += right;
		return tmp;
	}

	inline string& operator+=(string& left, const string& right){
		std::strcat(left.m_data,right.m_data);
		return left;
	}
}