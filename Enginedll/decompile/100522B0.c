/*
 * func-name: ??1OutpopRaycastReportIgnore@@UAE@XZ
 * func-address: 0x100522b0
 * callers: 0x10052340, 0x10143c20
 * callees: 0x10024540
 */

void __thiscall OutpopRaycastReportIgnore::~OutpopRaycastReportIgnore(void **this)
{
  CollisionInfo::~CollisionInfo(this + 2);
  *this = &NxUserRaycastReport::`vftable';
}
