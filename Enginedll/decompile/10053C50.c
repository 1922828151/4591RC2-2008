/*
 * func-name: ??1NxPhysics@@QAE@XZ
 * func-address: 0x10053c50
 * callers: 0x101b9650
 * callees: 0x10052ef0, 0x10053240, 0x101a2500
 */

void __thiscall NxPhysics::~NxPhysics(NxPhysics *this)
{
  int v2; // eax
  int v3; // eax
  int v4; // eax

  if ( *((_DWORD *)this + 21) )
    operator delete(*((void **)this + 21));
  *((_DWORD *)this + 21) = 0;
  *((_DWORD *)this + 22) = 0;
  *((_DWORD *)this + 23) = 0;
  v2 = *((_DWORD *)this + 17);
  if ( v2 )
  {
    sub_10053240(v2, *((_DWORD *)this + 18));
    operator delete(*((void **)this + 17));
  }
  *((_DWORD *)this + 17) = 0;
  *((_DWORD *)this + 18) = 0;
  *((_DWORD *)this + 19) = 0;
  v3 = *((_DWORD *)this + 13);
  if ( v3 )
  {
    sub_10053240(v3, *((_DWORD *)this + 14));
    operator delete(*((void **)this + 13));
  }
  *((_DWORD *)this + 13) = 0;
  *((_DWORD *)this + 14) = 0;
  *((_DWORD *)this + 15) = 0;
  *((_DWORD *)this + 11) = &NxUserTriggerReport::`vftable';
  *((_DWORD *)this + 10) = &NxUserControllerHitReport::`vftable';
  v4 = *((_DWORD *)this + 7);
  if ( v4 )
  {
    sub_10052EF0(v4, *((_DWORD *)this + 8));
    operator delete(*((void **)this + 7));
  }
  *((_DWORD *)this + 7) = 0;
  *((_DWORD *)this + 8) = 0;
  *((_DWORD *)this + 9) = 0;
  *((_DWORD *)this + 5) = &NxUserRaycastReport::`vftable';
}
