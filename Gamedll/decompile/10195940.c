/*
 * func-name: ?CanBeUsed@Weapon@GameClient@@UAE_NXZ_0
 * func-address: 0x10195940
 * callers: 0x100180bb
 * callees: none
 */

bool __thiscall GameClient::Weapon::CanBeUsed(GameClient::Weapon *this)
{
  int v1; // edx
  bool v2; // c0
  bool result; // al

  v1 = *((_DWORD *)this + 185);
  result = (double)*(int *)(160 * v1 + *((_DWORD *)this + 2) + 2128) <= *((float *)this + 47)
        && (*((_DWORD *)this + 186) == 3
          ? (v2 = *((float *)this + 188) > 0.0)
          : (v2 = *((float *)this + 18 * v1 + 190) > 0.0),
            !v2)
        && GameClient::Equip::CanBeUsed(this);
  return result;
}
