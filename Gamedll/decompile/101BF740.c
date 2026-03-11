/*
 * func-name: ?CanUseHyperEnergy@Func_Power@GameClient@@QAE_NM@Z_0
 * func-address: 0x101bf740
 * callers: 0x10007e05
 * callees: none
 */

bool __thiscall GameClient::Func_Power::CanUseHyperEnergy(GameClient::Func_Power *this, float a2)
{
  return a2 <= *((double *)this + 7) && *((float *)this + 46) >= (double)*((float *)this + 42);
}
