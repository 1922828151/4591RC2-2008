/*
 * func-name: sub_1004DAE0
 * func-address: 0x1004dae0
 * callers: 0x1004dcc0, 0x1004de30, 0x1004dfb0
 * callees: 0x1004e770
 */

int __usercall sub_1004DAE0@<eax>(int a1@<edi>)
{
  _DWORD *v1; // esi
  _DWORD *v2; // eax
  int v3; // eax
  ldiv_t v4; // rax
  _BYTE v6[8]; // [esp+8h] [ebp-14h] BYREF
  _BYTE v7[12]; // [esp+10h] [ebp-Ch] BYREF

  v1 = (_DWORD *)std::string::end(a1, v6);
  v2 = (_DWORD *)std::string::begin(a1, v7);
  v3 = sub_1004E770(*v2, v2[1], *v1, v1[1]);
  v4 = ldiv(v3, 127773);
  return 16807 * v4.rem - 2836 * v4.quot + (16807 * v4.rem - 2836 * v4.quot < 0 ? 0x7FFFFFFF : 0);
}
