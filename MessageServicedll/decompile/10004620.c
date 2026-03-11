/*
 * func-name: sub_10004620
 * func-address: 0x10004620
 * callers: none
 * callees: 0x10020b90, 0x10029556, 0x100295ba
 */

char *__thiscall sub_10004620(char *this, char a2)
{
  Outpop::Utility::Sect_Block_Allocator *v4; // eax

  if ( (a2 & 2) != 0 )
  {
    `eh vector destructor iterator'(
      this,
      0x6Cu,
      *((_DWORD *)this - 1),
      (void (__thiscall *)(void *))Outpop::Message::Message::~Message);
    if ( (a2 & 1) != 0 )
      operator delete[](this - 4);
    return this - 4;
  }
  else
  {
    Outpop::Message::Message::~Message((Outpop::Message::Message *)this);
    if ( (a2 & 1) != 0 && this )
    {
      v4 = (Outpop::Utility::Sect_Block_Allocator *)Outpop::Utility::Sect_Block_Allocator::instance(this);
      Outpop::Utility::Sect_Block_Allocator::free(v4);
    }
    return this;
  }
}
