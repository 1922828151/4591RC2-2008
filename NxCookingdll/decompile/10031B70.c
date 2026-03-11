/*
 * func-name: sub_10031B70
 * func-address: 0x10031b70
 * callers: 0x10032340
 * callees: 0x10037231, 0x1004840a
 */

_DWORD *__thiscall sub_10031B70(_DWORD *this, unsigned int a2, unsigned int a3)
{
  unsigned int v5; // edi
  unsigned int v6; // eax
  unsigned int v7; // ecx
  _DWORD *v8; // ebp
  _DWORD *v9; // edx
  unsigned int v10; // eax
  bool v11; // cf
  _DWORD *v13; // [esp+10h] [ebp+4h]

  if ( this[5] < a2 )
    std::_String_base::_Xran();
  v5 = a3;
  v6 = this[5] - a2;
  if ( v6 < a3 )
    v5 = this[5] - a2;
  if ( v5 )
  {
    v7 = this[6];
    v8 = this + 1;
    if ( v7 < 0x10 )
      v13 = this + 1;
    else
      v13 = (_DWORD *)*v8;
    if ( v7 < 0x10 )
      v9 = this + 1;
    else
      v9 = (_DWORD *)*v8;
    memmove_s((char *)v9 + a2, v7 - a2, (char *)v13 + a2 + v5, v6 - v5);
    v10 = this[5] - v5;
    v11 = this[6] < 0x10u;
    this[5] = v10;
    if ( !v11 )
      v8 = (_DWORD *)*v8;
    *((_BYTE *)v8 + v10) = 0;
  }
  return this;
}
