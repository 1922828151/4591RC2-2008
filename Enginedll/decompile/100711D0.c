/*
 * func-name: sub_100711D0
 * func-address: 0x100711d0
 * callers: 0x10071450, 0x10075480
 * callees: 0x10011510, 0x1006f820, 0x1006f8f0
 */

int **__thiscall sub_100711D0(int **this, int a2)
{
  _DWORD *v3; // esi
  int v5; // [esp+10h] [ebp-8h] BYREF

  v3 = this + 1;
  if ( this + 1 != (int **)(a2 + 4) )
  {
    sub_1006F820((int)(this + 1), &v5, (int)(this + 1), *this[2], (int)(this + 1), (int)this[2]);
    sub_1006F8F0(v3, a2 + 4);
  }
  std::string::operator=(this + 4, a2 + 16);
  sub_10011510((int)(this + 11), a2 + 44);
  return this;
}
