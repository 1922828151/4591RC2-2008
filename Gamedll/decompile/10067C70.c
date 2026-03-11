/*
 * func-name: sub_10067C70
 * func-address: 0x10067c70
 * callers: 0x1001188d
 * callees: 0x1000753b, 0x102c9d50, 0x102c9dc8, 0x102c9e3e
 */

char *__thiscall sub_10067C70(char *this, char a2)
{
  if ( (a2 & 2) != 0 )
  {
    `eh vector destructor iterator'(
      this,
      0xF40u,
      *((_DWORD *)this - 1),
      (void (__thiscall *)(void *))CChatInputUI::~CChatInputUI);
    if ( (a2 & 1) != 0 )
      operator delete[](this - 4);
    return this - 4;
  }
  else
  {
    CChatInputUI::~CChatInputUI((CChatInputUI *)this);
    if ( (a2 & 1) != 0 )
      operator delete(this);
    return this;
  }
}
