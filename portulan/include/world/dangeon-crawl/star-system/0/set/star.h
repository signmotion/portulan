#ifndef PORTULAN_AS_OPEN_CL_STRUCT

#pragma once

#include "structure.h"


/**
* ���������� � ������ � ������� �������.
*/
namespace portulan {
    namespace world {
        namespace dungeoncrawl {
            namespace starsystem {
                namespace l0 {
#endif


/**
* ���������� � ������ � ������� �������.
*
* # ������� ����� �� �����������: ����� MapContent3D - ������� ��������.
* # ��������������, ������� ����� ���� ��������, ����� �������� � ������
*   'future'. ���� ������� ������ ��� ������ ��� ������� �� ���������
*   ������������� ��������.
*/
typedef struct __attribute__ ((packed)) {
    /**
    * ������ ��������������� � ������� ���������� ������� �������.
    */
    bool live;

    /**
    * ����� ������, ��.
    *
    * @see pns::massStar()
    */
    mass_t mass;

    /**
    * ������ ������, �.
    */
    real_t radius;

    /**
    * ����������� ���� ������, �.
    */
    real_t kernelTemperature;

    /**
    * ����������� ����������� ������, �.
    * ������� ��� ������� ����������.
    * #! �� ������ � ������������ ������ ������.
    */
    real_t surfaceTemperature;

    /**
    * ���������� ������ � ������� �������, XYZ, �.
    */
    real_t coord[ 3 ];

    /**
    * ������ ������ �� XYZ.
    */
    real_t rotation[ 3 ];

    /**
    * ������ �������������� ���, ����������� �� ������, �.
    * ����� ������ ����� �������.
    */
    real_t force[ 3 ];
    real_t absForce;

    /**
    * �������� �������� ������ � ������� �������, XYZ, �/�.
    */
    real_t velocity[ 3 ];

    /**
    * ���������� ������.
    */
    real_t luminosity;

} characteristicStar_t;




typedef struct __attribute__ ((packed)) {
    /**
    * ������������� ������.
    */
    uid_t uid;

    /**
    * �������������� ������: ������ � ��� ����. ������.
    */
    characteristicStar_t today;
    characteristicStar_t future;

    /**
    * �������, ���������� ������� �� 1 �����.
    */
    emitterEvent_t emitterEvent;

} aboutStar_t;




/**
* ����� � ������� ������� �������.
*
* # ���� ���� ����������� - ���������, ����� �� ������� ������� �������
*   � �.�. - ��� ����� = 0.
* # ������������� ������ - ������ ����� ������.
*/
typedef aboutStar_t*  starContent_t;
typedef struct __attribute__ ((packed)) {
    starContent_t content;
} star_t;




#ifndef PORTULAN_AS_OPEN_CL_STRUCT
                } // l0
            } // starsystem
        } // dungeoncrawl
    } // world
} // portulan
#endif
