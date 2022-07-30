//{---------------------------
//! @file argument_proccessing.h
//{---------------------------


/// ��������� ��� �������� �������� ���������� ��������� ������
struct OptionDef
{
    const char* option_name;

    void (*func)();
};


//Global

bool Debug = false;

char default_file_name[] = "tests.txt";

//Global


/// \brief   ������� ��������� ���������� ��������� ������
/// \arg     argc - ���������� ���������� ��������� ������ ��� ������� .exe �����
/// \arg     argv - ������ �������� ����������
/// \arg     options - ������ �������� � ��������� ��������� � ��������������� ��� ��������
/// \arg     options_range - ������ ������� ����������
/// \note    ���������� ��������� ���� ��������� ���������� �� ����� ������� ����������.
/// \warning ������� �� ����� ���������� ����� ������ �������� ������ �������.

void process_arguments (int                    argc,      const char* argv[],
                       const struct OptionDef  Options[], int         options_range);


void print_help()
{
    printf ("Guess you need some help, try to find an answer in our documentation!\n");

    char help_src[] = "html\\index.html";

    system (help_src);
}


void process_arguments (int                    argc,      const char* argv[],
                        const struct OptionDef Options[], int         options_range)
{
    assert (argc > 0 && argv != NULL && Options != NULL && options_range < INF);

    int count_processed_options = 0;

    for (int i = 0; i < argc; i++)
    {
        for(int j = 0; j < options_range; j++)
        {
            if (strcmp(argv[i], Options[j].option_name) == 0)
            {
                if ((argv[i][1] == 't' || argv[i][2] == 't') && argc != i + 1)
                {
                    strcpy (default_file_name, argv[i+1]);

                    if (argv[i+1][0] == '-' && argv[i+1][1] == '\0') default_file_name[0] = '\0';
                }

                Options[j].func (argc, argv, i);

                count_processed_options++;
            }
        }
    }

    //if (count_processed_options != argc - 1)
    //{
    //    printf ("Some arguments are incorrect.\n");
    //}
}
