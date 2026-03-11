/*
 * func-name: sub_10054F30
 * func-address: 0x10054f30
 * callers: none
 * callees: 0x1012fc10, 0x101a2500, 0x101a253a, 0x101a259e
 */

char *__thiscall sub_10054F30(char *this, char a2)
{
  if ( (a2 & 2) != 0 )
  {
    `eh vector destructor iterator'(
      this,
      0x1148u,
      *((_DWORD *)this - 1),
      (void (__thiscall *)(void *))SkyController::~SkyController);
    if ( (a2 & 1) != 0 )
      operator delete[](this - 4);
    return this - 4;
  }
  else
  {
    SkyController::~SkyController((SkyController *)this);
    if ( (a2 & 1) != 0 )
      operator delete(this);
    return this;
  }
}
