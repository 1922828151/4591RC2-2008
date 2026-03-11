/*
 * func-name: sub_1006B630
 * func-address: 0x1006b630
 * callers: none
 * callees: 0x100c9db0, 0x101a2500, 0x101a253a, 0x101a259e
 */

char *__thiscall sub_1006B630(char *this, char a2)
{
  if ( (a2 & 2) != 0 )
  {
    `eh vector destructor iterator'(
      this,
      0x440u,
      *((_DWORD *)this - 1),
      (void (__thiscall *)(void *))C3DModel::~C3DModel);
    if ( (a2 & 1) != 0 )
      operator delete[](this - 4);
    return this - 4;
  }
  else
  {
    C3DModel::~C3DModel((C3DModel *)this);
    if ( (a2 & 1) != 0 )
      operator delete(this);
    return this;
  }
}
