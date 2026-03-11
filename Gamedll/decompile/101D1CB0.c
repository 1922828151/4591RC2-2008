/*
 * func-name: ?GetMaxStartupTime@Skill@GameClient@@QBEMXZ_0
 * func-address: 0x101d1cb0
 * callers: 0x100137ff
 * callees: none
 */

double __thiscall GameClient::Skill::GetMaxStartupTime(GameClient::Skill *this)
{
  return *(float *)(*((_DWORD *)this + 2) + 144);
}
