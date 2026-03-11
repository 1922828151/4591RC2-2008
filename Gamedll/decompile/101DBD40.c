/*
 * func-name: sub_101DBD40
 * func-address: 0x101dbd40
 * callers: 0x100074c3
 * callees: 0x1001503c, 0x10015a2d, 0x102c9d50
 */

void __thiscall sub_101DBD40(char *this)
{
  void *v2; // eax
  int v3; // eax

  v2 = (void *)*((_DWORD *)this + 39);
  if ( v2 )
    operator delete(v2);
  *((_DWORD *)this + 39) = 0;
  *((_DWORD *)this + 40) = 0;
  *((_DWORD *)this + 41) = 0;
  sub_10015A2D();
  v3 = *((_DWORD *)this + 31);
  if ( v3 )
  {
    sub_1001503C(v3, *((_DWORD *)this + 32));
    operator delete(*((void **)this + 31));
  }
  *((_DWORD *)this + 31) = 0;
  *((_DWORD *)this + 32) = 0;
  *((_DWORD *)this + 33) = 0;
  std::string::~string(this + 80);
  std::string::~string(this + 28);
  std::string::~string(this);
}
