/*
 * func-name: sub_100A2620
 * func-address: 0x100a2620
 * callers: none
 * callees: 0x101557e0, 0x101a2500, 0x101a253a, 0x101a259e
 */

char *__thiscall sub_100A2620(char *this, char a2)
{
  if ( (a2 & 2) != 0 )
  {
    `eh vector destructor iterator'(
      this,
      0x230u,
      *((_DWORD *)this - 1),
      (void (__thiscall *)(void *))CControlBox::~CControlBox);
    if ( (a2 & 1) != 0 )
      operator delete[](this - 4);
    return this - 4;
  }
  else
  {
    CControlBox::~CControlBox((CControlBox *)this);
    if ( (a2 & 1) != 0 )
      operator delete(this);
    return this;
  }
}
