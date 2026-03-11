/*
 * func-name: sub_100F1A70
 * func-address: 0x100f1a70
 * callers: 0x10006122
 * callees: 0x10001b77, 0x1001666c, 0x102c9d50
 */

void __thiscall sub_100F1A70(char *this)
{
  int v2; // eax
  void *v3; // eax

  Precacher::PurgeModel((struct Model **)this + 22);
  v2 = *((_DWORD *)this + 19);
  if ( v2 )
  {
    sub_10001B77(v2, *((_DWORD *)this + 20));
    operator delete(*((void **)this + 19));
  }
  *((_DWORD *)this + 19) = 0;
  *((_DWORD *)this + 20) = 0;
  *((_DWORD *)this + 21) = 0;
  v3 = (void *)*((_DWORD *)this + 15);
  if ( v3 )
  {
    sub_1001666C(v3, *((_DWORD *)this + 16));
    operator delete(*((void **)this + 15));
  }
  *((_DWORD *)this + 15) = 0;
  *((_DWORD *)this + 16) = 0;
  *((_DWORD *)this + 17) = 0;
  std::string::~string(this + 28);
  std::string::~string(this);
}
