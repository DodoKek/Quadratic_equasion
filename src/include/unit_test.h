
//{---------------------------
//! @file unit_test.h
//{---------------------------

#ifndef UNIT_TEST
#define UNIT_TEST

#include <stdio.h>
#include <string.h>
#include <assert.h>
#include <stdlib.h>
#include <TXlib.h>

#include "log.h"

/// \brief ������� �������� �� ����� Unit ������ ����������� ���������
/// \param [in] argc ���������� ���������� ��������� ������
/// \param [in] argv ������ ���������� ��������� ������
/// \param [in] pos  ������� ��������� ��������� ������

int unit_test                     (int argc, const char* argv[], int pos);

/// \brief �������, ���������� �� ��������� ����
/// \param [in] test_data[] ������ ������ � ���� �������� ������(���������� � ������)
/// \param [in] num_of_test
/// \warning ����� ������ � ����� �� ��������� ������

void unit_test_quadratic_equation (double test_data[], int num_of_test);

/// \brief ������� ��������� ��������� ���� � ������� get_tests_file � � ����� ��������� ��� �����
/// \param file_name ��� ����� � �������
/// \param argument_indx ����� ��������� ��������� ������, �� ������� ������������ ����������
/// \param tests_amount ���������� ������ ��� �������, ������ ���� � �������
/// \note  �� ���� ����� ����������� ������ ��� �����, ��� ��� � ������� get_tests_file �������� ���������� ����� ������

int start_tests_cycle             (char file_name_tmp[], int argument_indx, int tests_amount);

/// \brief ������� ��� ���������� �����
/// \param [in] ��� �����
/// \return File stream

FILE* get_tests_file              (char file_name[]);

extern bool is_equal              (double num_1, double num_2);

namespace quadratic_equation
{
    extern int calculate_roots    (double roots_array[], double data_arr[]);
}

#endif
