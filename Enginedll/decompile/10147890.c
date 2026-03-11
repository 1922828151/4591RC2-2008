/*
 * func-name: ??0OutpopRaycastReportIgnore@@QAE@ABV?$vector@JV?$allocator@J@std@@@std@@@Z
 * func-address: 0x10147890
 * callers: 0x10143c20
 * callees: 0x100244d0
 */

float *__thiscall OutpopRaycastReportIgnore::OutpopRaycastReportIgnore(float *this, int a2)
{
  *(_DWORD *)this = &OutpopRaycastReportIgnore::`vftable';
  *((_BYTE *)this + 4) = 0;
  CollisionInfo::CollisionInfo((CollisionInfo *)(this + 2));
  this[29] = 3.4028235e38;
  *((_DWORD *)this + 28) = a2;
  return this;
}
