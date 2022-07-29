//{---------------------------
//! @file square_equation.h
//{---------------------------


/// ��������� ���������� ����� ���������.
enum NUM_OF_ROOTS
{
    NO_ROOTS = 0,
    ONE_ROOT,
    TWO_ROOTS,
    INFINITE_ROOTS,
};

/// ��������� ��� �������� �������� ���������� ��������� ������
struct OptionDef
{
    const char* option_name;

    void (*func)();
};

/// \brief ������� ������� ��� ������� ����������� ���������
namespace quadratic_equation
{
    /// \brief ������� �������� �� ����� ������, ���������� ������
    /// \note  ����������� ������ � ����������� ����������� ������� � ������ ���������� �������
    /// \param roots_amount ���������� ������ ���������, ���������� �� ������� calculate_roots_return_amount
    /// \param roots_array[] ������ ������ ���������

    void print_answer(int roots_amount, double roots_array[]);

    /// \brief  ������� �������� ���������� ������ � �� ��������
    /// \param  roots_array ������ ����������� ����������� ���������� ������ � ���� ������ �������
    /// \param  data_arr ������ �������� ����������� ���������
    /// \note   ���������� ������ ������ �������� ���������� NAN
    /// \return

    int calculate_roots_return_amount(double roots_array[], double data_arr[]);

    /// \brief ������� ������� ��� ������� ����������� ���������
    /// \note  ��� � ������ ���������� ���� ������ � ����� ��������� ������� �� ������� namespace'�

    void solve_quadratic_equation(double data_arr[]);
}

/// \brief ������� �������� �� ����� Unit ������ ����������� ���������

void start_unit_test();

/// \brief �������, ���������� �� ��������� ����
/// \param test_data[] ������ ������ � ���� �������� ������(���������� � ������)
/// \param num_of_test
/// \warning ����� ������ � ����� �� ��������� ������

void unit_test_quadratic_equation(double test_data[], int num_of_test);

/// \brief   ������� ��������� ���������
/// \param   roots_array ����������� ������ ������ ���������
/// \param   koef_a, koef_b - ���������� ��������� ��������� ���� ax + b = 0
/// \warning ����� ���� ����������� ���������� �������
/// \return  ���������� ������

int solve_linear_equation_return_amount(double roots_array[], double koef_a, double koef_b);

/// \brief �������� ��������� ���� ����� ���� double
/// \note ����� ������������ � ��������� �� ���������� ��������� Accuracy

bool is_equal(double num_1, double num_2);

/// \brief ������� ��� ���������� �������� ������
/// \param data_arr - ����������� ������ ������ �����
/// \param option - ���������� ��� ������ ���� ��������.

bool get_input(double data_arr[], int option);

/// \brief �������� ��������� ���� ����� ���� double.
/// \note ����� ������������ � ����� � ��������� �� ���������� ��������� Accuracy.

bool is_zero(double number);

/// \brief ���������� ����������� ������� ������� NAN.

void fill_array_with_NAN(double arr[], int length);

/// \brief ��������������� ������� ��� �������� ������ �����.
/// \param length - ���������� ���������, ������� � 0-�� ��� ����������.

void clear_buffer();

/// \brief �������� ��������� "q" ��� ������ �� ���� �����.

bool check_on_exit();

/// \brief   ������� ��������� ���������� ��������� ������
/// \arg     argc - ���������� ���������� ��������� ������ ��� ������� .exe �����
/// \arg     argv - ������ �������� ����������
/// \arg     options - ������ �������� � ��������� ��������� � ��������������� ��� ��������
/// \arg     options_range - ������ ������� ����������
/// \note    ���������� ��������� ���� ��������� ���������� �� ����� ������� ����������.
/// \warning ������� �� ����� ���������� ����� ������ �������� ������ �������.

void process_arguments(int                    argc,      const char* argv[],
                      const struct OptionDef  Options[], int         options_range);

/// \brief ����� ��������� � �������. ������� �� ������������

void print_help();


//Constants
const int Debug = false;

const double Accuracy = 0.000001;

const int SolveSqrOpt = 1;

const double POISON_NUM = 12345.6;

const int MAX_DATA_SIZE = 100;

const double INF = 1000000000;

const OptionDef Options[] = {
    {"--test", start_unit_test},
    {"-t",     start_unit_test},
    {"/t",     start_unit_test},

    {"--help", print_help},
    {"-h",     print_help},
    {"/h",     print_help}
};

const char default_file_name[] = "tests.txt";
//---------
