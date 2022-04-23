//
// Created by xxp on 2022/4/23.
//

#ifndef FIRSTPROJECT_TABTENN0_H
#define FIRSTPROJECT_TABTENN0_H

#include <string>

using std::string;

//
class TableTennisPlayer {
private:
    string firstname;
    string lastname;
    bool hasTable;
public:
    TableTennisPlayer(const string &fn = "none", const string &ln = "none", bool ht = false);

    void Name() const;

    bool HasTable() const {
        return hasTable;
    }

    void ResetTable(bool v) {
        hasTable = v;
    }
};


#endif //FIRSTPROJECT_TABTENN0_H
