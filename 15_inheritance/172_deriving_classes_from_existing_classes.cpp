/*

%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%%%     deriving classes from existing classes  %%%%
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

% c++ derivation syntax

    class Base {
        //base class members
    };

    class derived: access-specifier Base {
        // derived class members
    };

    access-specifier can be: public, private or protected

% types of inheritance in c++

    - public
        & Most common
        & establish ' is a ' relationship between derived and base classes
    
    - private and protected
        & establishes ' derived class HAS A base class ' relationship
        & ' is implemented in terms of ' relationship
        & different from composition

% c++ derivation syntax

        class Account {
            //account class members ...
        };
        
        class Savings_Accounts: public Account {
            //Savings_Accounts class members ...
        }

    - Savings_Account ' IS A ' Account

% c++ creating objects

        Account account {};
        Account *p_account = new Account();

        account.deposit(1000.0);
        p_account -> withdraw(200.0)

        delete p_account;

        Savings_Account sav_account {};
        Savings_Account *p_sav_account = new Savings_Account();

        sav_account.deposit(1000.0);
        p_sav_account -> withdraw(200);

        delete p_sav_account;

*/