#include<bits/stdc++.h>
using namespace std;

int main(){

    //Intialized all keywords under a List called keyword.
    vector<string> keyword = {"auto","break","case","char","const","continue","default","do","double","else","enum","extern","float","for","goto","if","int","long","register","return","short","signed","sizeof","static","struct","switch","typedef","union","unsigned","void","volatile","while"};

    vector<string>::iterator stringIteration;
    set<string> numbers;
    set<string>::iterator numberIteration;                //Creating Set to avoid duplicity.
    set<char> specialCharacters;
    vector<char> word;
    set<char>::iterator characterIteration;

    //Declaration or Intialized some variable(Some are used as a flag and some are used for counting).
    string p;
    bool commentFlag = false,strFlag = false;
    int token = 0,line = 0;

    ifstream inputFile;
    inputFile.open("inputFileOf337.txt");

    cout<<"\t1. The Keywords and identifiers are:\n";
    while(getline(inputFile,p)){   //For traversing line by line.
            line++;
            cout<<"\n\tLine "<<line<<": "<<p<<endl;
        for(int i=0;i<p.size();i++){   //For traversing latter by latter.


            ///Comment and String Detaction.
            if(commentFlag){             //For Multiple Line Comment End.
                if(p.at(i)=='*' && p[i+1]=='/'){
                    cout<<"\n\t\t#Multiple Line Comment End#\n\n";
                    i++;
                    commentFlag = false;
                }
            }else if(strFlag){          //For String(" ") End.
                if(p.at(i)=='"'){
                    cout<<"\n\t\t#String End#\n\n";
                    strFlag = false;
                }
            }else if(p.at(i)=='/' && p[i+1]=='/'){       //For Single Line Comment.
                cout<<"\n\t\t#Single Line Comment(Found)#\n\n";
                break;
            }else if(p.at(i)=='/' && p[i+1]=='*'){       //For Multiple Line Commnet Start.
                cout<<"\n\t\t#Multiple Line Comment(Found) Start#\n\n";
                commentFlag = true;
            }else if(p.at(i)=='"'){                       //For String(" ") Start.
                cout<<"\n\t\t#String(Found) Start#\n\n";
                token++;
                strFlag = true;
            }

            ///Operator Detection.
            else{
                //First we check Operators which created by adding two or more operators.
                if(p.at(i)==':' && p[i+1]==':'){              // :: and ::~
                    specialCharacters.insert(':');
                    if(p[i+2]=='~'){
                        specialCharacters.insert('~');
                        cout<<"::~ is an operator\n";
                        token++;
                        i+=2;                                 //Because we don't need to check next two latter. because they are : and ~ (Already checked).
                    }else{
                        cout<<":: is an operator\n";
                        token++;
                        i++;
                    }
                }else if(p.at(i)=='-'){                       // -, --, -> and -=
                    specialCharacters.insert('-');
                    if(p[i+1]=='-'){
                        cout<<"-- is an operator\n";
                        token++;
                        i++;
                    }else if(p[i+1]=='>'){
                        specialCharacters.insert('>');
                        cout<<"-> is an operator\n";
                        token++;
                        i++;
                    }else if(p[i+1]=='='){
                        specialCharacters.insert('=');
                        cout<<"-= is an operator\n";
                        token++;
                        i++;
                    }else{
                        cout<<"- is an operator\n";
                        token++;                              //Do not increase the value of i. Because here we check the single latter. so we need to check next later in next iteration.
                    }
                }else if(p.at(i)=='+'){                       // +, ++ and +=
                    specialCharacters.insert('+');
                    if(p[i+1]=='+'){
                        cout<<"++ is an operator\n";
                        token++;
                        i++;
                    }else if(p[i+1]=='='){
                        cout<<"+= is an operator\n";
                        token++;
                        i++;
                    }else{
                        cout<<"+ is an operator\n";
                        token++;
                    }
                }else if(p.at(i)=='<'){                       // <, << and <<=
                    specialCharacters.insert('<');
                    if(p[i+1]=='<'){
                        if(p[i+2]=='='){
                            specialCharacters.insert('=');
                            cout<<"<<= is an operator\n";
                            token++;
                            i+=2;
                        }else{
                            cout<<"<< is an operator\n";
                            token++;
                            i++;
                        }
                    }else{
                        cout<<"< is an operator\n";
                        token++;
                    }
                }else if(p.at(i)=='>'){                       // >, >> and >>=
                    specialCharacters.insert('>');
                    if(p[i+1]=='>'){
                        if(p[i+2]=='='){
                            specialCharacters.insert('=');
                            cout<<">>= is an operator\n";
                            token++;
                            i+=2;
                        }else{
                            cout<<">> is an operator\n";
                            token++;
                            i++;
                        }
                    }else{
                        cout<<"> is an operator\n";
                        token++;
                    }
                }else if(p.at(i)=='='){                     // = and ==
                    specialCharacters.insert('=');
                    if(p[i+1]=='='){
                        cout<<"== is an operator\n";
                        token++;
                        i++;
                    }else{
                        cout<<"= is an operator\n";
                        token++;
                    }
                }else if(p.at(i)=='!'){                     // ! and !=
                    specialCharacters.insert('!');
                    if(p[i+1]=='='){
                        cout<<"!= is an operator\n";
                        token++;
                        i++;
                    }else{
                        cout<<"! is an operator\n";
                        token++;
                    }
                }else if(p.at(i)=='&'){                    // &, && and &=
                    specialCharacters.insert('&');
                    if(p[i+1]=='&'){
                        cout<<"&& is an operator\n";
                        token++;
                        i++;
                    }else if(p[i+1]=='='){
                        specialCharacters.insert('=');
                        cout<<"&= is an operator\n";
                        token++;
                        i++;
                    }else{
                        cout<<"& is an operator\n";
                        token++;
                    }
                }else if(p.at(i)=='|'){                    // |, || and |=
                    specialCharacters.insert('|');
                    if(p[i+1]=='|'){
                        cout<<"|| is an operator\n";
                        token++;
                        i++;
                    }else if(p[i+1]=='='){
                        specialCharacters.insert('=');
                        cout<<"|= is an operator\n";
                        token++;
                        i++;
                    }else{
                        cout<<"| is an operator\n";
                        token++;
                    }
                }else if(p.at(i)=='*'){                    // *, *=
                    specialCharacters.insert('*');
                    if(p[i+1]=='='){
                        specialCharacters.insert('=');
                        cout<<"*= is an operator\n";
                        token++;
                        i++;
                    }else{
                        cout<<"* is an operator\n";
                        token++;
                    }
                }else if(p.at(i)=='/'){                    // / and /=
                    specialCharacters.insert('/');
                    if(p[i+1]=='='){
                        specialCharacters.insert('=');
                        cout<<"/= is an operator\n";
                        token++;
                        i++;
                    }else{
                        cout<<"/ is an operator\n";
                        token++;
                    }
                }else if(p.at(i)=='%'){                    // % and %=
                    specialCharacters.insert('%');
                    if(p[i+1]=='='){
                        specialCharacters.insert('=');
                        cout<<"%= is an operator\n";
                        token++;
                        i++;
                    }else{
                        cout<<"% is an operator\n";
                        token++;
                    }
                }else if(p.at(i)=='^'){                    // ^ and ^=
                    specialCharacters.insert('^');
                    if(p[i+1]=='='){
                        specialCharacters.insert('=');
                        cout<<"^= is an operator\n";
                        token++;
                        i++;
                    }else{
                        cout<<"^ is an operator\n";
                        token++;
                    }
                }
                //Now we check the single operator.
                else if(p.at(i)=='?' || p.at(i)=='~'){         // ? and ~
                    specialCharacters.insert(p.at(i));
                    cout<<p.at(i)<<" is an operator\n";
                    token++;
                }else if(p.at(i)==':'){                        // :
                    specialCharacters.insert(':');
                    cout<<": is an operator\n";
                    token++;
                }
                //Symbols Detection.
                else if(p.at(i)=='.' || p.at(i)==',' || p.at(i)=='#' || p.at(i)=='_' || p.at(i)=='[' || p.at(i)=='{' || p.at(i)=='(' || p.at(i)==')' || p.at(i)=='}' || p.at(i)==']' || p.at(i)=='\\' || p.at(i)==';' || p.at(i)=='\''){
                    specialCharacters.insert(p.at(i));
                    cout<<p.at(i)<<" is a symbol\n";
                    token++;
                }

                //Keyword, Constant and Identifier detection.
                if(!commentFlag && !strFlag){                 //If we are not under the Multi-Line Comment of any String(" Text ").
                    if(!isalpha(p.at(i)) && !isdigit(p.at(i))){                                 //If the next(Current) latter is not a digit or not a alphabet then we can say we get a word, which can be a identifier or constant or keyword).
                        if(!word.empty()){                                                      //This is used to avoid double space or more then one space problem.
                            token++;
                            string theword(word.begin(),word.end());                            //we store the full word in new variable theword.
                            stringIteration = find(keyword.begin(),keyword.end(),theword);      //We find theword variable under the keyword Vector and store this in stringIteration.
                            if(stringIteration != keyword.end()){                               //If the item is not the vectors last item(Where last item of any vector is "null"). Then We can say it is a key word.
                                cout<<theword<<" is a keyword\n";
                            }else if(isdigit(theword[0])){                                      //If the first item of theword is digit, then we can say it is a constant. Because keywords and identifire are not start with number.
                                numbers.insert(theword);
                                cout<<theword<<" is a constant\n";
                            }else{                                                              //Else it will be a identifier.
                                cout<<theword<<" is an identifier\n";
                            }
                            word.clear();                                                       //We clear the intere word for identifying next one!(Constant or identifier or keyword)
                        }
                    }else{                                                                      //As long as the latter is digit or an alphabet we take or we can say push it into the word.
                        word.push_back(p.at(i));
                    }
                }
            }
        }
        //This whole term is used for avoid the Error which we get to identifiyng last word of a line.
        if(!word.empty()){
            token++;
            string theword(word.begin(),word.end());
            stringIteration = find(keyword.begin(),keyword.end(),theword);
            if(stringIteration != keyword.end()){
                cout<<theword<<" is a keyword\n";
            }else if(isdigit(theword[0])){
                numbers.insert(theword);
                cout<<theword<<" is a constant\n";
            }else{
                cout<<theword<<" is an identifier\n";
            }
            word.clear();
        }
    }

    //Showing output of (Numbers, characters, lines and tokens).
    cout<<"\n\t2. The numbers in program are:\n\t\t";
    for(numberIteration = numbers.begin();numberIteration!=numbers.end();numberIteration++){
        cout<<*numberIteration<<", ";
    }


    cout<<"\n\t3. Special Characters:\n\t\t";
    for(characterIteration = specialCharacters.begin();characterIteration!=specialCharacters.end();characterIteration++){
        cout<<*characterIteration<<" ";
    }
    cout<<"\n\t4. Total no. of lines is: "<<line;
    cout<<"\n\t5. Total no. of tokens is: "<<token<<endl;


    return 0;
}
