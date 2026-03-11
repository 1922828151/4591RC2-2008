/*
 * func-name: sub_10016B70
 * func-address: 0x10016b70
 * callers: none
 * callees: 0x10016af0, 0x10018cf2, 0x10018d56, 0x10018e1c
 */

char *__thiscall sub_10016B70(char *this, char a2)
{
  if ( (a2 & 2) != 0 )
  {
    `eh vector destructor iterator'(
      this,
      0x9Cu,
      *((_DWORD *)this - 1),
      (void (__thiscall *)(void *))Outpop::Utility::Record::`vbase destructor');
    if ( (a2 & 1) != 0 )
      operator delete[](this - 4);
    return this - 4;
  }
  else
  {
    Outpop::Utility::Record::~Record((Outpop::Utility::Record *)this);
    std::ios::~ios<char,std::char_traits<char>>(this + 104);
    if ( (a2 & 1) != 0 )
      operator delete(this);
    return this;
  }
}
