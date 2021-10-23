//this is the main file
#include "func.h"
float var;

int main(int argc, char* argv[])
{
    var=1.2;
    displayVersion();
    parse_url("http://www.google.com");
    parse_url("https://mail.google.com/mail/");
    parse_url("https://www.google.com:443/webhp?gws_rd=ssl");
    return 0;
}
