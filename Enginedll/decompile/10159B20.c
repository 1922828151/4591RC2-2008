/*
 * func-name: ??1MaterialIntersect@@QAE@XZ
 * func-address: 0x10159b20
 * callers: 0x101b9690
 * callees: 0x1015a210, 0x101a2500
 */

void __thiscall MaterialIntersect::~MaterialIntersect(MaterialIntersect *this)
{
  int v2; // eax
  int v3; // eax

  std::string::~string((char *)this + 32);
  v2 = *((_DWORD *)this + 5);
  if ( v2 )
  {
    sub_1015A210(v2, *((_DWORD *)this + 6));
    operator delete(*((void **)this + 5));
  }
  *((_DWORD *)this + 5) = 0;
  *((_DWORD *)this + 6) = 0;
  *((_DWORD *)this + 7) = 0;
  v3 = *((_DWORD *)this + 1);
  if ( v3 )
  {
    sub_1015A210(v3, *((_DWORD *)this + 2));
    operator delete(*((void **)this + 1));
  }
  *((_DWORD *)this + 1) = 0;
  *((_DWORD *)this + 2) = 0;
  *((_DWORD *)this + 3) = 0;
}
