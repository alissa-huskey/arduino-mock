#ifndef _STRING_H
#define _STRING_H

#include <string>

class String: public std::string {
  public:
    String( const std::string& s ) : std::string(s) {
    }

    String( const char* s ) : std::string(s) {
    }

    String( const int& i ) {
      this->assign( std::to_string(i) );
    }

    String gsub(String pattern, String substitute)  {
      size_t start_pos = this->find(pattern);
      if(start_pos != std::string::npos) {
        std::string::replace(start_pos, pattern.length(), substitute);
      }
      return *this;
    }
};

#endif
