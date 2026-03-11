/*
 * func-name: sub_10014580
 * func-address: 0x10014580
 * callers: none
 * callees: 0x1000fd70, 0x10013730
 */

int __thiscall sub_10014580(_DWORD *this)
{
  int result; // eax

  if ( this )
  {
    *this = &TriangleMesh::`vftable';
    sub_10013730(this);
    sub_1000FD70(this + 1);
    *this = &NvTriangleMesh::`vftable';
    return (*(int (__thiscall **)(int, _DWORD *))(*(_DWORD *)dword_100580A0 + 20))(dword_100580A0, this);
  }
  return result;
}
