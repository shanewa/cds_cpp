#ifndef _CONFIG_
#define _CONFIG_
#endif
#ifdef _CONFIG_

#include <vector>
#include <string>
#include <fstream>
#include <stdlib.h>
#include <assert.h>
#include "path.h"
using namespace std;

class config
{
    public:
        void read(vector<path> &);
        void load(vector<path> &);
    private:
        string cfg = ""
        void get_env(string, string &);
};

#endif
