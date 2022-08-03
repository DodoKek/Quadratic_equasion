//{---------------------------
//! @file unit_tests.h
//{---------------------------

#include <stdio.h>
#include <string.h>
#include <assert.h>
#include <stdlib.h>
#include <txlib.h>

/// \brief ������� �������� �� ����� Unit ������ ����������� ���������

int start_unit_test (int argc, const char* argv[], int pos);

/// \brief �������, ���������� �� ��������� ����
/// \param test_data[] ������ ������ � ���� �������� ������(���������� � ������)
/// \param num_of_test
/// \warning ����� ������ � ����� �� ��������� ������

void unit_test_quadratic_equation (double test_data[], int num_of_test);

FILE* get_tests_file(char file_name[]);

extern bool is_equal (double num_1, double num_2);

namespace quadratic_equation
{
    extern int calculate_roots (double roots_array[], double data_arr[]);
}

