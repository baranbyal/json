// rpaidjson_denemelere.cpp : this file contains the 'main' function. program execution begins and ends there.
//

#include <iostream>
#include <rapidjson/document.h>
#include <rapidjson/rapidjson.h>
#include <rapidjson/istreamwrapper.h>
#include "rapidjson/writer.h"
#include "rapidjson/stringbuffer.h"
#include <rapidjson/ostreamwrapper.h>
#include <fstream>
#include <vector>

using namespace rapidjson;
using namespace std;
//using namespace ios;

int main()
{
    std::ifstream ifs("input.json");
    bool check_ifs = ifs.good();
    rapidjson::Document doc1;
    if (check_ifs) {
        rapidjson::IStreamWrapper isw(ifs);
        
        doc1.ParseStream(isw);
    }
    int k = doc1.MemberCount();
    std::string jsonstr;

    //auto *array_string = doc1["birinci"].GetString();

    const rapidjson::Value& array_object = doc1["birinci"];

    assert(array_object.IsArray());

    int num = array_object.Size();
    

    

    std::cout << "the number of objects in json is:  " << k << '\n' << "[";
    
    for (int i = 0; i < num; i++) {
        std::cout << array_object[i].GetInt() << " ";
    }
    std::cout << "]" << endl;

    return 0;
}
