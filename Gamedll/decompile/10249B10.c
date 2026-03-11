/*
 * func-name: sub_10249B10
 * func-address: 0x10249b10
 * callers: 0x1000b659
 * callees: 0x1000925f, 0x102c9d50, 0x102c9dc8, 0x102c9e3e
 */

char *__thiscall sub_10249B10(char *this, char a2)
{
  if ( (a2 & 2) != 0 )
  {
    `eh vector destructor iterator'(
      this,
      0x104u,
      *((_DWORD *)this - 1),
      (void (__thiscall *)(void *))GameClient::FASearch::~FASearch);
    if ( (a2 & 1) != 0 )
      operator delete[](this - 4);
    return this - 4;
  }
  else
  {
    *(_DWORD *)this = &GameClient::FASearch::`vftable';
    GameClient::FAura::~FAura((GameClient::FAura *)this);
    if ( (a2 & 1) != 0 )
      operator delete(this);
    return this;
  }
}
