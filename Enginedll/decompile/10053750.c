/*
 * func-name: ??0OutpopRaycastReport@@QAE@ABV0@@Z
 * func-address: 0x10053750
 * callers: 0x10053d20
 * callees: 0x100534c0
 */

OutpopRaycastReport *__thiscall OutpopRaycastReport::OutpopRaycastReport(
        OutpopRaycastReport *this,
        const struct OutpopRaycastReport *a2)
{
  *(_DWORD *)this = &OutpopRaycastReport::`vftable';
  sub_100534C0((int)this + 4, (int)a2 + 4);
  return this;
}
