/*
 * func-name: sub_1000DF90
 * func-address: 0x1000df90
 * callers: none
 * callees: 0x10001050, 0x1000c820, 0x1000db40, 0x10018280
 */

int __thiscall sub_1000DF90(_DWORD *this)
{
  int result; // eax

  if ( this )
  {
    *this = &ConvexMesh::`vftable';
    sub_1000DB40(this);
    sub_1000C820(this + 39);
    NxReportCooking();
    sub_10018280(this + 2);
    *this = &NvConvexMesh::`vftable';
    return (*(int (__thiscall **)(int, _DWORD *))(*(_DWORD *)dword_100580A0 + 20))(dword_100580A0, this);
  }
  return result;
}
