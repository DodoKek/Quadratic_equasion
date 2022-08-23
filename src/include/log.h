//{---------------------------
//! @file log.h
//{---------------------------

#ifndef LOGGING

//-----------------------------------------------------------------------------

#define $(X)            printf  ("%s:%03d>>> " #X "\n", __FILE__, __LINE__); X

#define DO(X)           fprintf    (LOG_FILE, "%25s:%03d ", __FILE__, __LINE__);              \
                        fputc      ('|', LOG_FILE);                                           \
                        put_spaces (SPACING*4),                                               \
                        fprintf    (LOG_FILE, "%25s:%03d>>> " #X "\n", __FILE__, __LINE__), X

#define LOG_ARGV(...)   fprintf    (LOG_FILE, "%25s:%03d ", __FILE__, __LINE__);              \
                        fputc      ('|', LOG_FILE);                                           \
                        put_spaces (SPACING*4),                                               \
                        fprintf    (LOG_FILE, __VA_ARGS__),                                   \
                        fputc      ('\n', LOG_FILE)

#define LOG_FUNC(...)   fprintf (LOG_FILE, __VA_ARGS__)

#define __TRACKBEGIN__       add_tree_level       (__func__);
#define __TRACKEND__         substract_tree_level (__func__);

#define LOGGING _LOGGING

//Global/Const-----------------------------------------------------------------

static FILE* LOG_FILE = nullptr;

static int LOG_LEVEL = 9;

const char DEFAULT_LOG_NAME[] = "log.txt";

static char ACTIVE_LOGFILE_NAME[] = "log.txt";

static int SPACING = 0;

//Global/Const-----------------------------------------------------------------

//-----------------------------------------------------------------------------

/// \brief ������� ��� ���������� �����, ���� ����� �������� ����
/// \param file_name [in] ��� �����
/// \return ������� �� ���� ���������� �����

bool get_log_file         (char file_name[]);

/// \brief ������� ��� ���������� ���������� ��������� ������ ��� ������ � ������
/// \param argc [in] ���������� ���������� ��������� ������
/// \param pos [in]  ������� ������� ��������� ��������� ������
/// \note ���� ����� �������� ������

int open_log              (int argc, const char* argv[], int pos);

/// \brief ��������� �����������

void finish_log           ();

/// \brief ���������� �������� ��� ������ �������
/// \param [in] spaces_amount ���������� ������ ��� ���������� ��������

void put_spaces           (int spaces_amount);

/// \brief ������� ��� ���������� �� ���� ������� � ������ �������
/// \param ��� �������, � ������� �� ������
/// \note ����� ������ � ����� ������

void add_tree_level       (const char* func_name);

/// \brief �������, ��������������� add_tree_level
/// \note ����� ������ ����� ����� ����������� ��������� �������

void substract_tree_level (const char* func_name);

//-----------------------------------------------------------------------------

#endif
