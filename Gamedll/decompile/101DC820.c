/*
 * func-name: sub_101DC820
 * func-address: 0x101dc820
 * callers: 0x10008ec2
 * callees: 0x10003530, 0x10019844
 */

_DWORD *__thiscall sub_101DC820(_DWORD *this, _BYTE *a2)
{
  char *v3; // edi

  v3 = (char *)(this + 1);
  *(_BYTE *)this = *a2;
  this[2] = sub_10019844();
  *((_DWORD *)v3 + 2) = 0;
  this[5] = 0;
  this[6] = 0;
  this[7] = 0;
  sub_10003530((int)a2);
  return this;
}
