//{---------------------------
//! @file argument_proccessing.h
//{---------------------------

#include <txlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <assert.h>

#include "log.h"

/// ��������� ��� �������� �������� ���������� ��������� ������
struct OptionDef
{
    const char* name;

    int (*func)(int argc, const char* argv[], int argc_pos);
};


//Global/Constant

const char default_file_name[] = "tests.txt";

//Global/Constants


/// \brief   ������� ��������� ���������� ��������� ������
/// \arg     argc - ���������� ���������� ��������� ������ ��� ������� .exe �����
/// \arg     argv - ������ �������� ����������
/// \arg     options - ������ �������� � ��������� ��������� � ��������������� ��� ��������
/// \arg     options_range - ������ ������� ����������
/// \note    ���������� ��������� ���� ��������� ���������� �� ����� ������� ����������.
/// \warning ������� �� ����� ���������� ����� ������ �������� ������ �������.

void process_arguments (int                    argc,      const char* argv[],
                       const struct OptionDef  Options[], int         options_range);

int print_help(int argc, const char* argv[], int pos);

//-----------------------------------------------------------------------------


