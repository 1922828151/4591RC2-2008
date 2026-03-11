/*
 * func-name: sub_10016030
 * func-address: 0x10016030
 * callers: 0x10017530, 0x100179f0
 * callees: 0x10014c40
 */

_DWORD *__cdecl sub_10016030(char a1, char a2, char a3, char a4, _DWORD *a5)
{
  _DWORD *v5; // eax
  _DWORD *v6; // eax
  _DWORD *v7; // eax

  v5 = sub_10014C40(a5, a1);
  v6 = sub_10014C40(v5, a2);
  v7 = sub_10014C40(v6, a3);
  return sub_10014C40(v7, a4);
}
