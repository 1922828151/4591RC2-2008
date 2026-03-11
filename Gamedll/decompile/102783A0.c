/*
 * func-name: ?ResetTime@COccupyEstabUI@@QAEXXZ_0
 * func-address: 0x102783a0
 * callers: 0x10011eb9
 * callees: none
 */

void __thiscall COccupyEstabUI::ResetTime(COccupyEstabUI *this)
{
  *((float *)this + 972) = *(float *)&GSeconds;
}
