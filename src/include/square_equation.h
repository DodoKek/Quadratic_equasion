//{---------------------------
//! @file square_equation.h
//{---------------------------

#include "TXlib.h"
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <assert.h>

/// ��������� ���������� ����� ���������.
enum NUM_OF_ROOTS
{
    NO_ROOTS = 0,
    ONE_ROOT,
    TWO_ROOTS,
    INFINITE_ROOTS,
};

/// \brief ������� ������� ��� ������� ����������� ���������
namespace quadratic_equation
{
    /// \brief ������� �������� �� ����� ������, ���������� ������
    /// \note  ����������� ������ � ����������� ����������� ������� � ������ ���������� �������
    /// \param roots_amount ���������� ������ ���������, ���������� �� ������� calculate_roots
    /// \param roots_array[] ������ ������ ���������

    void print_answer (int roots_amount, double roots_array[]);

    /// \brief  ������� �������� ���������� ������ � �� ��������
    /// \param  roots_array ������ ����������� ����������� ���������� ������ � ���� ������ �������
    /// \param  data_arr ������ �������� ����������� ���������
    /// \note   ���������� ������ ������ �������� ���������� NAN
    /// \return

    int calculate_roots (double roots_array[], double data_arr[]);

    /// \brief ������� ������� ��� ������� ����������� ���������
    /// \note  ��� � ������ ���������� ���� ������ � ����� ��������� ������� �� ������� namespace'�

    void solve_quadratic_equation (double data_arr[]);
}

bool get_input (double data_arr[], int option);


/// \brief   ������� ��������� ���������
/// \param   roots_array ����������� ������ ������ ���������
/// \param   koef_a, koef_b - ���������� ��������� ��������� ���� ax + b = 0
/// \warning ����� ���� ����������� ���������� �������
/// \return  ���������� ������

int solve_linear_equation (double roots_array[], double koef_a, double koef_b, double koef_c);

/// \brief �������� ��������� ���� ����� ���� double
/// \note ����� ������������ � ��������� �� ���������� ��������� Accuracy

bool is_equal (double num_1, double num_2);

/// \brief ������� ��� ���������� �������� ������
/// \param data_arr - ����������� ������ ������ �����
/// \param option - ���������� ��� ������ ���� ��������.

bool is_zero (double number);

/// \brief ���������� ����������� ������� ������� NAN.

void fill_array (double arr[], int length, double filler);

/// \brief ��������������� ������� ��� �������� ������ �����.
/// \param length - ���������� ���������, ������� � 0-�� ��� ����������.

void clear_buffer();

/// \brief �������� ��������� "q" ��� ������ �� ���� �����.

bool check_on_exit();

/// \brief ����� ��������� � �������. ������� �� ������������

void print_help();

//-----------------------------------------------------------------------------

