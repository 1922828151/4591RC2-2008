/*
 * func-name: sub_100369E0
 * func-address: 0x100369e0
 * callers: none
 * callees: 0x1015c650, 0x101a2500, 0x101a253a, 0x101a259e
 */

char *__thiscall sub_100369E0(char *this, char a2)
{
  if ( (a2 & 2) != 0 )
  {
    `eh vector destructor iterator'(
      this,
      0x70u,
      *((_DWORD *)this - 1),
      (void (__thiscall *)(void *))SubareaManager::~SubareaManager);
    if ( (a2 & 1) != 0 )
      operator delete[](this - 4);
    return this - 4;
  }
  else
  {
    SubareaManager::~SubareaManager((SubareaManager *)this);
    if ( (a2 & 1) != 0 )
      operator delete(this);
    return this;
  }
}
