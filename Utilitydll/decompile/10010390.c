/*
 * func-name: sub_10010390
 * func-address: 0x10010390
 * callers: 0x10013850
 * callees: 0x10010c00
 */

int __usercall sub_10010390@<eax>(int a1@<edi>)
{
  _DWORD *v1; // esi
  _DWORD *v2; // eax
  int v3; // eax
  ldiv_t v4; // rax
  _BYTE v6[8]; // [esp+8h] [ebp-14h] BYREF
  _BYTE v7[12]; // [esp+10h] [ebp-Ch] BYREF

  v1 = (_DWORD *)std::string::end(a1, v6);
  v2 = (_DWORD *)std::string::begin(a1, v7);
  v3 = sub_10010C00(*v2, v2[1], *v1, v1[1]);
  v4 = ldiv(v3, 127773);
  return 16807 * v4.rem - 2836 * v4.quot + (16807 * v4.rem - 2836 * v4.quot < 0 ? 0x7FFFFFFF : 0);
}
