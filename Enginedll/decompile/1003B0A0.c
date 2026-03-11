/*
 * func-name: sub_1003B0A0
 * func-address: 0x1003b0a0
 * callers: none
 * callees: 0x1003af90
 */

char __thiscall sub_1003B0A0(
        _DWORD *this,
        char a2,
        _DWORD *a3,
        int a4,
        int a5,
        int a6,
        int a7,
        unsigned int a8,
        int a9)
{
  bool v9; // cf
  _DWORD *v10; // eax

  v9 = a8 < 0x10;
  this[44] = a9;
  v10 = a3;
  if ( v9 )
    v10 = &a3;
  if ( sub_1003AF90((int)this, (int)v10) )
  {
    std::string::~string(&a2);
    return 1;
  }
  else
  {
    std::string::~string(&a2);
    return 0;
  }
}
