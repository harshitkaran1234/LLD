#ifndef logger_hpp
#define logger_hpp

#include<string>
#include<mutex>
#include<iostream>
 
using namespace std;

class Logger{
    static int ctr;
    static Logger* loggerInstance;
    static mutex mtx;
    Logger(){
        ctr++;
        cout<<"New instance of logger created"<<ctr<<endl;
    }
    Logger(const Logger&);
    Logger operator=(const Logger &);
    //making all constructors private

    public:
        static Logger* getLogger(){ 
            if(loggerInstance == nullptr){
                mtx.lock();
                if(loggerInstance == nullptr){
                    loggerInstance = new Logger();
                }
                mtx.unlock();
            }
            return loggerInstance;
        }
        void log(string msg){
            cout<<msg<<endl;  
        }
};

#endif