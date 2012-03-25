#ifndef PIECE_H
#define PIECE_H

#endif // PIECE_H

#include "constants.h"
#include "Object3D.h"

class Piece
{
public:
    static int id;
    static Object3D obj;
};

class Piece_Bishop : public Piece
{
public:
    static int id;
    static Object3D obj;
};

class Piece_Knight : public Piece
{
public:
    static int id;
    static Object3D obj;
};

class Piece_Pawn : public Piece
{
public:
    static int id;
    static Object3D obj;
};

class Piece_Rook : public Piece
{
public:
    static int id;
    static Object3D obj;
};

class Piece_King : public Piece
{
public:
    static int id;
    static Object3D obj;
};

class Piece_Queen : public Piece
{
public:
    static int id;
    static Object3D obj;
};
