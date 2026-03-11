/*
 * func-name: ?load_config@P2P_Context@P2P@Outpop@@QAEXABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
 * func-address: 0x10001e80
 * callers: none
 * callees: none
 */

void __thiscall Outpop::P2P::P2P_Context::load_config(void *this, int a2)
{
  char v3; // [esp+Bh] [ebp-Dh] BYREF
  int v4; // [esp+14h] [ebp-4h]

  Outpop::Utility::Config::Config((Outpop::Utility::Config *)&v3);
  v4 = 0;
  Outpop::Utility::Config::load_config(&v3, a2, this);
  v4 = -1;
  Outpop::Utility::Config::~Config((Outpop::Utility::Config *)&v3);
}
