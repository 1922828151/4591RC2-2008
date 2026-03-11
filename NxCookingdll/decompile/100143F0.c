/*
 * func-name: sub_100143F0
 * func-address: 0x100143f0
 * callers: 0x10024be0
 * callees: 0x1000fd70, 0x10013730
 */

void __thiscall sub_100143F0(_DWORD *this)
{
  *this = &TriangleMesh::`vftable';
  sub_10013730(this);
  sub_1000FD70(this + 1);
  *this = &NvTriangleMesh::`vftable';
}
