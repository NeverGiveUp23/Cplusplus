//
// Created by Felix Vargas Jr on 12/12/24.
//


#include <string_view>
#include <iostream>
#include <string>


void printString(std::string str){ // str makes a copy of its initializer
    std::cout << str << "\n";
}


// using string view allows read only access to a string instead of making a copy of it in main causing inefficiently
// string view is best used for read-only function param
void printStringView(std::string_view str){
    std::cout << str << "\n";
}



// careful returning std::string_view
//
//std::string_view getBoolName(bool b){
//    std::string t{"true"};
//    std::string f{"false"};
//
//    if(b)
//        return t;
//
//    return f;
//} // t and f are both destroyed at the end of the function

// there are case where string view can be returned safely

std::string_view getBool(bool b){
    if(b)
        return "true";

    return "false"; // return a string view viewing false
} // true and false are not destroyed;


// its also ok to return a function param of type string view

// note that  a and b exist in the scope of the caller. when the function is called, function param s1 is a view into a
// and s2 is a view into b. when the function returning either s1 or s2, it is returning a view into a or b back to the caller.
// since a and b still exist in this point, it is okay to return string_view int a and b
//std::string_view firstAlph(std::string_view s1, std::string_view s3){
//    if(s1 < s2){
//       return s1;
//    }
//    return s2;
//}
//
//std::string a {"Hello"};
//std::string b {"World"};

// firstAlph(a, b)



int main() {

    std::string str{"Hello"}; // str makes a copy of its initializer
    printString(str);

    std::string_view s{"Hello "};

    printStringView(s);

    s.remove_prefix(2); // removes 2 chars from the left side; -> (llo) is the output
    printStringView(s);

    s.remove_suffix(3); // removes from the left side;
    printStringView(s);


    // this is a misuse of string_view

    std::string_view sv{};

    {
        std::string s{"Hello"};
        sv = s; // sv is now viewing s
    } // s is destroyed here, so sv is now viewing an invalid string.


    return 0;
}