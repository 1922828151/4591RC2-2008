/*
 * func-name: sub_101CEC60
 * func-address: 0x101cec60
 * callers: 0x100017fd
 * callees: 0x1001686a, 0x102c9d50, 0x102c9dc8, 0x102c9e3e
 */

char *__thiscall sub_101CEC60(char *this, char a2)
{
  if ( (a2 & 2) != 0 )
  {
    `eh vector destructor iterator'(
      this,
      0xF38u,
      *((_DWORD *)this - 1),
      (void (__thiscall *)(void *))CWaitQueueUI::~CWaitQueueUI);
    if ( (a2 & 1) != 0 )
      operator delete[](this - 4);
    return this - 4;
  }
  else
  {
    CWaitQueueUI::~CWaitQueueUI((CWaitQueueUI *)this);
    if ( (a2 & 1) != 0 )
      operator delete(this);
    return this;
  }
}
