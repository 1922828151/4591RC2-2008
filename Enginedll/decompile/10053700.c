/*
 * func-name: ??1OutpopRaycastReport@@UAE@XZ
 * func-address: 0x10053700
 * callers: 0x100537a0, 0x10053bd0, 0x10053d20
 * callees: 0x10052ef0, 0x101a2500
 */

void __thiscall OutpopRaycastReport::~OutpopRaycastReport(OutpopRaycastReport *this)
{
  int v2; // eax
  void **v3; // esi

  v2 = *((_DWORD *)this + 2);
  v3 = (void **)((char *)this + 4);
  if ( v2 )
  {
    sub_10052EF0(v2, *((_DWORD *)this + 3));
    operator delete(v3[1]);
  }
  v3[1] = 0;
  v3[2] = 0;
  v3[3] = 0;
  *(_DWORD *)this = &NxUserRaycastReport::`vftable';
}
