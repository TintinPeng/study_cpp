/*
 * @Author: your name
 * @Date: 2020-08-27 11:03:42
 * @LastEditTime: 2020-09-06 19:55:46
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /study_cpp/src/example/ex_4_20.cpp
 */
#include "iostream"

using namespace std;

class Building {
private:
        /* data */

protected:
        int    floors;
        int    rooms;
        double j_area;

public:
        Building(int _floors = 0, int _rooms = 0, double _j_area = 0)
        {
                floors = _floors;
                rooms = _rooms;
                j_area = _j_area;
        }
        ~Building() { }
        void show_Info()
        {
                cout << "楼房层数:" << floors << endl;
                cout << "房间数:" << rooms << endl;
                cout << "楼房总面积:" << j_area << endl;
                cout << "其中:" << endl;
        }
};

class Home_Arch : public Building {
private:
        int bedrooms;
        int parlor;
        int toilets;
        int kitchens;

protected:
        /* data */

public:
        Home_Arch(int _floors = 0, int _rooms = 0, double _j_area = 0,
                int _bedrooms = 1, int _parlor = 1, int _toilets = 1, int _kitchens = 1)
                : Building(_floors, _rooms, _j_area)
        {
                bedrooms = _bedrooms;
                parlor = _parlor;
                toilets = _toilets;
                kitchens = _kitchens;
        }
        ~Home_Arch() { }
        void show()
        {
                cout << endl;
                cout << "住宅楼:" << endl;
                Building::show_Info();
                cout << "\t卧室数:" << bedrooms << endl;
                cout << "\t客厅数:" << parlor << endl;
                cout << "\t卫生间数:" << toilets << endl;
                cout << "\t厨房数:" << kitchens << endl;
        }
};

class Office_Building : public Building {
private:
        int office;
        int assembly_rooms;

protected:
        /* data */

public:
        Office_Building(int _floors = 0, int _rooms = 0, double _j_area = 0,
                int _office = 0, int _assembly_rooms = 0)
                : Building(_floors, _rooms, _j_area)
        {
                office = _office;
                assembly_rooms = _assembly_rooms;
        }
        ~Office_Building() { }
        void show()
        {
                cout << endl;
                cout << "办公楼:" << endl;
                Building::show_Info();
                cout << "\t办公室数:" << office << endl;
                cout << "\t会议室数:" << assembly_rooms << endl;
        }
};

class Hospital : public Building {
private:
        int sickrooms;
        int operation_rooms;

public:
        Hospital(int _floors = 0, int _rooms = 0, double _j_area = 0,
                int _sickrooms = 0, int _operation_rooms = 0)
                : Building(_floors, _rooms, _j_area)
        {
                sickrooms = _sickrooms;
                operation_rooms = _operation_rooms;
        }
        ~Hospital() { }
        void show()
        {
                cout << endl;
                cout << "医院:" << endl;
                Building::show_Info();
                cout << "\t病房数:" << sickrooms << endl;
                cout << "\t手术室数:" << operation_rooms << endl;
        }
};

int main(int argc, char const* argv[])
{
        Home_Arch       home(1, 100, 12000, 3, 1, 1, 1);
        Office_Building office(4, 80, 3500, 40, 12);
        Hospital        hospital(10, 300, 25000, 200, 20);
        home.show();
        office.show();
        hospital.show();
        return 0;
}