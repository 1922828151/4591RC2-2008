/*
 * func-name: ??0OutpopRaycastReportIgnore@@QAE@ABV0@@Z
 * func-address: 0x100522d0
 * callers: none
 * callees: 0x100245a0
 */

OutpopRaycastReportIgnore *__thiscall OutpopRaycastReportIgnore::OutpopRaycastReportIgnore(
        OutpopRaycastReportIgnore *this,
        const struct OutpopRaycastReportIgnore *a2)
{
  *(_DWORD *)this = &OutpopRaycastReportIgnore::`vftable';
  *((_BYTE *)this + 4) = *((_BYTE *)a2 + 4);
  CollisionInfo::CollisionInfo(
    (OutpopRaycastReportIgnore *)((char *)this + 8),
    (const struct OutpopRaycastReportIgnore *)((char *)a2 + 8));
  *((_DWORD *)this + 28) = *((_DWORD *)a2 + 28);
  *((float *)this + 29) = *((float *)a2 + 29);
  return this;
}
