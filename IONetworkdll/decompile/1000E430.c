/*
 * func-name: sub_1000E430
 * func-address: 0x1000e430
 * callers: none
 * callees: 0x1000e720, 0x1004e870, 0x1004e8d4, 0x1004e938
 */

char *__thiscall sub_1000E430(char *this, char a2)
{
  if ( (a2 & 2) != 0 )
  {
    `eh vector destructor iterator'(
      this,
      0xE8u,
      *((_DWORD *)this - 1),
      (void (__thiscall *)(void *))Outpop::IONetwork::Stream_Channel::~Stream_Channel);
    if ( (a2 & 1) != 0 )
      operator delete[](this - 4);
    return this - 4;
  }
  else
  {
    Outpop::IONetwork::Stream_Channel::~Stream_Channel((Outpop::IONetwork::Stream_Channel *)this);
    if ( (a2 & 1) != 0 )
      operator delete(this);
    return this;
  }
}
