#include "config.h"

void config::load(vector<path> &)
{
    ifstream config_file()

}

void config::get_env(string variable, string &value)
{
    char *p = getenv(variable.c_str());
    if (p != nullptr)
    {
        value = p;
    } 
    else
    {
        cout << "ERROR: cannot get the env variable!" << endl;
        assert(1);
    }
}