/*
 * func-name: sub_10032D90
 * func-address: 0x10032d90
 * callers: 0x10002fc7
 * callees: 0x10018d31, 0x102c9d50, 0x102c9dc8, 0x102c9e3e
 */

char *__thiscall sub_10032D90(char *this, char a2)
{
  if ( (a2 & 2) != 0 )
  {
    `eh vector destructor iterator'(
      this,
      0xCu,
      *((_DWORD *)this - 1),
      (void (__thiscall *)(void *))GameClient::DataObject::~DataObject);
    if ( (a2 & 1) != 0 )
      operator delete[](this - 4);
    return this - 4;
  }
  else
  {
    GameClient::DataObject::~DataObject((GameClient::DataObject *)this);
    if ( (a2 & 1) != 0 )
      operator delete(this);
    return this;
  }
}
