/*
 * func-name: ??_DRecord@Utility@Outpop@@QAEXXZ
 * func-address: 0x10016bd0
 * callers: 0x10016b70
 * callees: 0x10016af0
 */

void __thiscall Outpop::Utility::Record::`vbase destructor'(Outpop::Utility::Record *this)
{
  Outpop::Utility::Record::~Record(this);
  std::ios::~ios<char,std::char_traits<char>>((char *)this + 104);
}
