/*
 * func-name: sub_101949B0
 * func-address: 0x101949b0
 * callers: 0x1001297c
 * callees: 0x10001474, 0x102c9d50, 0x102c9dc8, 0x102c9e3e
 */

char *__thiscall sub_101949B0(char *this, char a2)
{
  if ( (a2 & 2) != 0 )
  {
    `eh vector destructor iterator'(
      this,
      0x8B4u,
      *((_DWORD *)this - 1),
      (void (__thiscall *)(void *))GameClient::FTransformItem::~FTransformItem);
    if ( (a2 & 1) != 0 )
      operator delete[](this - 4);
    return this - 4;
  }
  else
  {
    GameClient::FTransformItem::~FTransformItem((GameClient::FTransformItem *)this);
    if ( (a2 & 1) != 0 )
      operator delete(this);
    return this;
  }
}
