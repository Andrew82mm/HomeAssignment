/*
    Andrew Sergienko st135882@student.spbu.ru
*/
#ifndef SHIELD_H
#define SHIELD_H

class Shield {
private:
    int durability;
public:
    Shield(int durability);
    int getDurability() const;
    ~Shield();
};

#endif
