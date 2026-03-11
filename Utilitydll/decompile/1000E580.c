/*
 * func-name: sub_1000E580
 * func-address: 0x1000e580
 * callers: none
 * callees: 0x10003250, 0x1000e110, 0x1000ee90, 0x10018d56, 0x10018e1c
 */

Outpop::Utility::Stream_Base *__thiscall sub_1000E580(Outpop::Utility::Stream_Base *this, char a2)
{
  Outpop::Utility::Sect_Block_Allocator *v4; // eax

  if ( (a2 & 2) != 0 )
  {
    `eh vector destructor iterator'(
      this,
      0x48u,
      *((_DWORD *)this - 1),
      (void (__thiscall *)(void *))Outpop::Utility::Binary_Stream::~Binary_Stream);
    if ( (a2 & 1) != 0 )
      operator delete[]((char *)this - 4);
    return (Outpop::Utility::Stream_Base *)((char *)this - 4);
  }
  else
  {
    *(_DWORD *)this = &Outpop::Utility::Binary_Stream::`vftable';
    Outpop::Utility::Stream_Base::~Stream_Base(this);
    if ( (a2 & 1) != 0 )
    {
      v4 = Outpop::Utility::Sect_Block_Allocator::instance();
      Outpop::Utility::Sect_Block_Allocator::free(v4, (char *)this);
    }
    return this;
  }
}
