/*
 * func-name: sub_1000EB80
 * func-address: 0x1000eb80
 * callers: none
 * callees: 0x10003250, 0x1000e110, 0x1000ee90, 0x10018d56, 0x10018e1c
 */

char *__thiscall sub_1000EB80(char *this, char a2)
{
  Outpop::Utility::Sect_Block_Allocator *v4; // eax

  if ( (a2 & 2) != 0 )
  {
    `eh vector destructor iterator'(
      this,
      0x24u,
      *((_DWORD *)this - 1),
      (void (__thiscall *)(void *))Outpop::Utility::Stream_Base::~Stream_Base);
    if ( (a2 & 1) != 0 )
      operator delete[](this - 4);
    return this - 4;
  }
  else
  {
    Outpop::Utility::Stream_Base::~Stream_Base((Outpop::Utility::Stream_Base *)this);
    if ( (a2 & 1) != 0 && this )
    {
      v4 = Outpop::Utility::Sect_Block_Allocator::instance();
      Outpop::Utility::Sect_Block_Allocator::free(v4, this);
    }
    return this;
  }
}
