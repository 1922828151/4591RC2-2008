/*
 * func-name: sub_10105470
 * func-address: 0x10105470
 * callers: none
 * callees: 0x10105210, 0x101a2500, 0x101a253a, 0x101a259e
 */

char *__thiscall sub_10105470(char *this, char a2)
{
  if ( (a2 & 2) != 0 )
  {
    `eh vector destructor iterator'(
      this,
      0x1F0u,
      *((_DWORD *)this - 1),
      (void (__thiscall *)(void *))PostProcessEffect::~PostProcessEffect);
    if ( (a2 & 1) != 0 )
      operator delete[](this - 4);
    return this - 4;
  }
  else
  {
    PostProcessEffect::~PostProcessEffect((PostProcessEffect *)this);
    if ( (a2 & 1) != 0 )
      operator delete(this);
    return this;
  }
}
