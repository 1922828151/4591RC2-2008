/*
 * func-name: sub_100028D0
 * func-address: 0x100028d0
 * callers: 0x10002a00
 * callees: 0x10001830
 */

int __thiscall sub_100028D0(_DWORD *this, _DWORD *a2)
{
  _DWORD *v2; // edi
  _DWORD *v4; // edx
  char *v5; // esi
  int result; // eax
  int v7; // eax
  int v8; // [esp+8h] [ebp-4h] BYREF

  v2 = a2;
  LOBYTE(v8) = *(_BYTE *)this;
  sub_10001830(a2, (int)&v8, 1u);
  a2 = (_DWORD *)this[1];
  sub_10001830(v2, (int)&a2, 4u);
  LOBYTE(a2) = *((_BYTE *)this + 8);
  sub_10001830(v2, (int)&a2, 1u);
  a2 = (_DWORD *)this[3];
  sub_10001830(v2, (int)&a2, 4u);
  v4 = (_DWORD *)this[10];
  v5 = (char *)(this + 4);
  a2 = v4;
  result = sub_10001830(v2, (int)&a2, 4u);
  if ( result == 4 )
  {
    v7 = *((_DWORD *)v5 + 4);
    if ( !v7 )
      v7 = (int)v5;
    return sub_10001830(v2, v7, *((_DWORD *)v5 + 6));
  }
  return result;
}
