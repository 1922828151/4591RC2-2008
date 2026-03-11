/*
 * func-name: sub_1000B4B0
 * func-address: 0x1000b4b0
 * callers: 0x1000ae10
 * callees: 0x10002c00, 0x1000ba80
 */

int __userpurge sub_1000B4B0@<eax>(_DWORD *a1@<eax>, int a2, int a3, int a4)
{
  _DWORD *v4; // esi
  int result; // eax

  v4 = sub_10002C00(a4, *(_DWORD *)(a4 + 4), a1);
  result = sub_1000BA80(1, a2);
  *(_DWORD *)(a4 + 4) = v4;
  *(_DWORD *)v4[1] = v4;
  return result;
}
