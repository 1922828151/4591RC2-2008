/*
 * func-name: sub_100233C0
 * func-address: 0x100233c0
 * callers: 0x100247c0, 0x10024900
 * callees: none
 */

void __thiscall sub_100233C0(int *this)
{
  *this = (int)&ConvexMeshBuilder::`vftable';
  *this = (int)&ConvexMesh::`vftable';
  sub_1000DB40(this);
  sub_1000C820(this + 39);
  NxReportCooking();
  sub_10018280(this + 2);
  *this = (int)&NvConvexMesh::`vftable';
}
