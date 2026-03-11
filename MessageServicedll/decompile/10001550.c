/*
 * func-name: ??0Message_Config_Paser@Message@Outpop@@QAE@AAVContext@12@AAVConfig_Paser@Utility@2@@Z
 * func-address: 0x10001550
 * callers: 0x1000c3b0
 * callees: none
 */

Outpop::Message::Message_Config_Paser *__thiscall Outpop::Message::Message_Config_Paser::Message_Config_Paser(
        Outpop::Message::Message_Config_Paser *this,
        struct Outpop::Message::Context *a2,
        struct Outpop::Utility::Config_Paser *a3)
{
  Outpop::Message::Message_Config_Paser *result; // eax

  result = this;
  *(_DWORD *)this = Outpop::Utility::Config_Paser::`vftable';
  *(_DWORD *)this = &Outpop::Message::Message_Config_Paser::`vftable';
  *((_DWORD *)this + 1) = a2;
  *((_DWORD *)this + 2) = a3;
  return result;
}
