/*
%%%%%%%%%%%%%%%%%%%%%%%%
%%% Inheritance %%%
%%%%%%%%%%%%%%%%%%%%%%%%

% What is it and why is it used ?

    - provides a method for create new classes for existing classes

    - the new class contains the data and behaviors of existing class

    - allow for reuse of existing classes

    - allows us to focus on the common attributes among a set of classes

    - allows new class to modify behaviors of existing classes to make it unique
        & Without actually modifying the original class

% terminology

    - inheritance
        & process of creating new classes from existing classes
        & reuse machanism

    - single inheritance
        & a new class is created from another 'single' class
    
    - Multiple inheritance
        & a new class is created from two or more other classes

    - base class (parent class, super class)
        & the class being extended or inherited from
    
    - derived class (child class, sub class)
        & the class being created from Base class
        & will inherit attributes and operations from Base class

    - "is A" relationship
        & public inheritance
        & derived classes are sub types of their Base classes
        & can use a derived class object wherever we use a base class object
    
    - generalization
        & combining similar classes into a single,more general class based on common attributes
    
    - specialization
        & create new class from existing classes proving more specialized attributes or operations
    
    - inheritance or class hierarchies
        & organization of our inheritance relationships

% public inheritance vs composition

    - both allows reuse of existing classes

    - public inheritance
        & " is - a " relationship
            % employee ' is a ' Person
            % circle ' is a ' shape

    - composition
        & " has - a " relationship
            % Person " has a " Account
            % circle " has a " location

            class Person {
                private:
                    std::string name; // has-a name
                    Account account; // has-a account
            };
*/