//{---------------------------
//! @file unit_tests.h
//{---------------------------

/// \brief ������� �������� �� ����� Unit ������ ����������� ���������

int start_unit_test (int argc, const char* argv[], int pos);

/// \brief �������, ���������� �� ��������� ����
/// \param test_data[] ������ ������ � ���� �������� ������(���������� � ������)
/// \param num_of_test
/// \warning ����� ������ � ����� �� ��������� ������

void unit_test_quadratic_equation (double test_data[], int num_of_test);

FILE* get_tests_file(char file_name[]);


