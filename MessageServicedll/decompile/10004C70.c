/*
 * func-name: sub_10004C70
 * func-address: 0x10004c70
 * callers: none
 * callees: 0x10020420, 0x100294f2, 0x10029556, 0x100295ba
 */

char *__thiscall sub_10004C70(char *this, char a2)
{
  if ( (a2 & 2) != 0 )
  {
    `eh vector destructor iterator'(
      this,
      0x70u,
      *((_DWORD *)this - 1),
      (void (__thiscall *)(void *))Outpop::Message::IO_Thread::~IO_Thread);
    if ( (a2 & 1) != 0 )
      operator delete[](this - 4);
    return this - 4;
  }
  else
  {
    Outpop::Message::IO_Thread::~IO_Thread((Outpop::Message::IO_Thread *)this);
    if ( (a2 & 1) != 0 )
      operator delete(this);
    return this;
  }
}
