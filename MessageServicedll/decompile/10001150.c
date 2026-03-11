/*
 * func-name: ??0Message_Config_Paser@Message@Outpop@@QAE@ABV012@@Z
 * func-address: 0x10001150
 * callers: none
 * callees: none
 */

Outpop::Message::Message_Config_Paser *__thiscall Outpop::Message::Message_Config_Paser::Message_Config_Paser(
        Outpop::Message::Message_Config_Paser *this,
        const struct Outpop::Message::Message_Config_Paser *a2)
{
  Outpop::Message::Message_Config_Paser *result; // eax

  result = this;
  *(_DWORD *)this = Outpop::Utility::Config_Paser::`vftable';
  *(_DWORD *)this = &Outpop::Message::Message_Config_Paser::`vftable';
  *((_DWORD *)this + 1) = *((_DWORD *)a2 + 1);
  *((_DWORD *)this + 2) = *((_DWORD *)a2 + 2);
  return result;
}
