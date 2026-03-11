/*
 * func-name: ?GetUsableDistance@Weapon@GameClient@@UBEMXZ_0
 * func-address: 0x101956a0
 * callers: 0x100110c2
 * callees: none
 */

double __thiscall GameClient::Weapon::GetUsableDistance(GameClient::Weapon *this)
{
  return (double)*(int *)(160 * *((_DWORD *)this + 185) + *((_DWORD *)this + 2) + 2196);
}
