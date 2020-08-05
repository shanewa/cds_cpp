#ifndef _PATH_
#define _PATH_
#endif
#ifdef _PATH_

#include <vector>
#include <string>
using namespace std;

class path
{
    private:
        string alias;
        string origin_path;
        string format_path;
    public:
        string get_alias();
        string get_origin_path();
        string get_format_path();
        void win2linux();
};

#endif