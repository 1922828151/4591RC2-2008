/*
 * func-name: sub_101DBC80
 * func-address: 0x101dbc80
 * callers: 0x100124d6
 * callees: 0x100015c8, 0x1000619f
 */

_DWORD *__thiscall sub_101DBC80(_DWORD *this, _BYTE *a2)
{
  char *v3; // edi

  v3 = (char *)(this + 1);
  *(_BYTE *)this = *a2;
  this[2] = sub_1000619F();
  *((_DWORD *)v3 + 2) = 0;
  this[5] = 0;
  this[6] = 0;
  this[7] = 0;
  sub_100015C8((int)a2);
  return this;
}
