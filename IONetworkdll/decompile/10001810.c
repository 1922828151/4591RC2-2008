/*
 * func-name: ??0Network_Config_Paser@IONetwork@Outpop@@QAE@ABV012@@Z
 * func-address: 0x10001810
 * callers: none
 * callees: none
 */

Outpop::IONetwork::Network_Config_Paser *__thiscall Outpop::IONetwork::Network_Config_Paser::Network_Config_Paser(
        Outpop::IONetwork::Network_Config_Paser *this,
        const struct Outpop::IONetwork::Network_Config_Paser *a2)
{
  Outpop::IONetwork::Network_Config_Paser *result; // eax

  result = this;
  *(_DWORD *)this = Outpop::Utility::Config_Paser::`vftable';
  *(_DWORD *)this = &Outpop::IONetwork::Network_Config_Paser::`vftable';
  return result;
}
