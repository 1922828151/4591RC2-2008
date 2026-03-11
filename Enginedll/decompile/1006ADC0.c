/*
 * func-name: sub_1006ADC0
 * func-address: 0x1006adc0
 * callers: none
 * callees: 0x100c87d0, 0x101a2500, 0x101a253a, 0x101a259e
 */

char *__thiscall sub_1006ADC0(char *this, char a2)
{
  if ( (a2 & 2) != 0 )
  {
    `eh vector destructor iterator'(
      this,
      0x370u,
      *((_DWORD *)this - 1),
      (void (__thiscall *)(void *))CREIMEEditBox::~CREIMEEditBox);
    if ( (a2 & 1) != 0 )
      operator delete[](this - 4);
    return this - 4;
  }
  else
  {
    CREIMEEditBox::~CREIMEEditBox((CREIMEEditBox *)this);
    if ( (a2 & 1) != 0 )
      operator delete(this);
    return this;
  }
}
