/*
 * func-name: sub_10052340
 * func-address: 0x10052340
 * callers: none
 * callees: 0x10024540, 0x101a2500, 0x101a253a, 0x101a259e
 */

void **__thiscall sub_10052340(void **this, char a2)
{
  if ( (a2 & 2) != 0 )
  {
    `eh vector destructor iterator'(
      this,
      0x78u,
      (int)*(this - 1),
      (void (__thiscall *)(void *))OutpopRaycastReportIgnore::~OutpopRaycastReportIgnore);
    if ( (a2 & 1) != 0 )
      operator delete[](this - 1);
    return this - 1;
  }
  else
  {
    CollisionInfo::~CollisionInfo(this + 2);
    *this = &NxUserRaycastReport::`vftable';
    if ( (a2 & 1) != 0 )
      operator delete(this);
    return this;
  }
}
