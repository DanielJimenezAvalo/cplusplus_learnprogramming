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


*/