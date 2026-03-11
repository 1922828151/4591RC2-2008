/*
 * func-name: sub_100372D0
 * func-address: 0x100372d0
 * callers: 0x1003c7d0
 * callees: 0x100017b0, 0x100490f0, 0x100901e0, 0x101a2500
 */

void __thiscall sub_100372D0(char *this)
{
  XMLSystem *v2; // ebp
  void *v3; // eax

  *(_DWORD *)this = &SubareaXMLLoad::`vftable';
  v2 = (XMLSystem *)(this + 84);
  XMLSystem::Destroy((XMLSystem *)(this + 84));
  *((_DWORD *)this + 44) = 0;
  *((_DWORD *)this + 45) = 0;
  std::string::operator=(this + 56, "(None)");
  v3 = (void *)*((_DWORD *)this + 51);
  if ( v3 )
    operator delete(v3);
  *((_DWORD *)this + 51) = 0;
  *((_DWORD *)this + 52) = 0;
  *((_DWORD *)this + 53) = 0;
  sub_100901E0(this + 188);
  operator delete(*((void **)this + 48));
  *((_DWORD *)this + 48) = 0;
  XMLSystem::~XMLSystem(v2);
  std::string::~string(this + 56);
  if ( *((_DWORD *)this + 8) )
    operator delete(*((void **)this + 8));
  *((_DWORD *)this + 8) = 0;
  *((_DWORD *)this + 9) = 0;
  *((_DWORD *)this + 10) = 0;
  if ( *((_DWORD *)this + 4) )
    operator delete(*((void **)this + 4));
  *((_DWORD *)this + 4) = 0;
  *((_DWORD *)this + 5) = 0;
  *((_DWORD *)this + 6) = 0;
}
