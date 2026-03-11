/*
 * func-name: sub_10194C00
 * func-address: 0x10194c00
 * callers: 0x1000a439
 * callees: 0x10012a2b, 0x102c9d50, 0x102c9dc8, 0x102c9e3e
 */

char *__thiscall sub_10194C00(char *this, char a2)
{
  if ( (a2 & 2) != 0 )
  {
    `eh vector destructor iterator'(
      this,
      0x310u,
      *((_DWORD *)this - 1),
      (void (__thiscall *)(void *))GameClient::TransformItem::~TransformItem);
    if ( (a2 & 1) != 0 )
      operator delete[](this - 4);
    return this - 4;
  }
  else
  {
    *(_DWORD *)this = &GameClient::TransformItem::`vftable';
    GameClient::Item::~Item((GameClient::Item *)this);
    if ( (a2 & 1) != 0 )
      operator delete(this);
    return this;
  }
}
