

#include "Player.h"
#include<cstring>

void Player::roll_dices() {
    for (int i=0;i<5;i++) if (!locked[i]) dices[i].next_roll();
    std::cout << "You have rolled dices and their current state is: ";
    for (int i=0;i<5;i++) std::cout << dices[i].current_number_on_dice() << ' ';
    std::cout << '\n';
}

bool Player::lock_dices(std::vector<int> &lockers) {
    if (lockers.size()!=5) {
        printf("You should input five booleans, try again!\n");
        return false;
    }

    for (int i = 0; i < 5; i++)
            this->locked[i] = lockers[i];
    return true;
}

bool Player::choose_category(int category) {
    if (category<1 || category>13) {
        std::cout << "You should input number from 1 to 13 inclusively\n";
        print_divider();
        return false;
    }

    if (this ->categories[category-1] != -1) {
        std::cout << "You have already chose this category, please choose another one!\n";
        print_divider();
        return false;
    }

    int gained_score = calculate(category);

    this -> score += gained_score;
    this -> categories[category-1] = gained_score;

    return true;
}

void Player::print_current_result() {
    std::cout << "Current results for player " << this->number_of_payer << '\n';
    for (int i = 0; i < 13; i++) {
        std::cout << names_of_categories[i] << ": " << (categories[i] <= 0 ? 0 : categories[i]) << '\n';
    }
    std::cout << "Score for player " << this->number_of_payer << " :" << this->score << '\n';
    print_divider();
}

void Player::print_divider() {
    std::cout << "*---------------------*\n\n\n";
}

int Player::calculate(int category) {
    int res = 0;
    if (category>=1 && category<=6)
    {
        for (int i = 0;i<5;i++) {
            if (dices[i].current_number_on_dice()==category) {
                res+= category;
            }
        }
        return res;
    }

    std::vector<int> cnt(6,0);
    for (int i=0;i<5;i++) cnt[dices[i].current_number_on_dice()-1]++;

    if (category>=7 && category<=8)
    {
        for (int i=0;i<6;i++) if (cnt[i]==category-4) {
            for (int j=0;j<5;j++) res+= dices[j].current_number_on_dice();
            return res;
        }
    }

    switch(category) {
        case 9: {
            bool ok2 = false, ok3 = false;
            for (int i = 0; i < 6; i++) {
                if (cnt[i] == 2) ok2 = true;
                else if (cnt[i] == 3) ok3 = true;
            }
            if (ok2 && ok3) return 25;
        }
        break;
        case 10: {
            bool ok;
            for (int i=0;i<3;i++) {
                ok = true;
                for (int j = i; j < i + 3; j++) if (cnt[i] == 0) ok = false;
                if (ok) return 30;
            }
        }
        break;
        case 11: {
            bool ok;
            for (int i=0;i<2;i++) {
                ok = true;
                for (int j = i; j < i + 4; j++) if (cnt[i] == 0) ok = false;
                if (ok) return 40;
            }
        }
            break;
        case 12:{
            for (int i = 0; i < 5; i++) {
                res += dices[i].current_number_on_dice();
            }
            return res;
        }
        case 13:{
            bool ok = true;
            for (int i=0;i<6;i++) if (cnt[i]==0) ok=false;
            if (ok) return 50;
        }
        break;
    }
    return 0;
}

Player::Player(int number) {
    this->number_of_payer = number;
    memset(this->categories,-1,sizeof(categories));
    memset(this->locked, 0 ,sizeof(locked));
}

std::vector<std::string> Player::get_combinations() {
    return names_of_categories;
}
