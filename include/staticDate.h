#ifndef STATICDATE_H
#define STATICDATE_H


class staticDate
{
    staticDate(){};
    static staticDate *sd;

    public:
        std::set<std::string>Method; //!< Member variable "std::set<std::string>Method;"
        std::map<int,std::string>StatusMsg; //!< Member variable "std::map<int,std::string>StatusMsg;"
        std::map<std::string,std::string>MIME; //!< Member variable "std::map<std::string,std::string>MIME;"
        void initMIME();
        static staticDate* getsDate();
};

#endif // STATICDATE_H
