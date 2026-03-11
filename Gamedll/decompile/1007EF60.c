/*
 * func-name: sub_1007EF60
 * func-address: 0x1007ef60
 * callers: 0x100043b3
 * callees: 0x102c9d50, 0x102c9dc8, 0x102c9e3e
 */

char *__thiscall sub_1007EF60(char *this, char a2)
{
  int v4; // eax

  if ( (a2 & 2) != 0 )
  {
    `eh vector destructor iterator'(
      this,
      0x470u,
      *((_DWORD *)this - 1),
      (void (__thiscall *)(void *))Effect_Base::~Effect_Base);
    if ( (a2 & 1) != 0 )
      operator delete[](this - 4);
    return this - 4;
  }
  else
  {
    v4 = *((_DWORD *)this + 263);
    *(_DWORD *)this = &Effect_Base::`vftable';
    if ( v4 )
      *(float *)(v4 + 108) = 0.0;
    Actor::~Actor((Actor *)this);
    if ( (a2 & 1) != 0 )
      operator delete(this);
    return this;
  }
}
