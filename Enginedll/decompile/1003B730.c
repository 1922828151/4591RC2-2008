/*
 * func-name: sub_1003B730
 * func-address: 0x1003b730
 * callers: 0x1003c0b0, 0x100915b0, 0x100f7930, 0x100f8170, 0x100f8300, 0x1010fd40, 0x10110440, 0x10112340, 0x101128f0, 0x10112ea0, 0x10113450, 0x10113a00, 0x101766f0, 0x10176ac0, 0x10177240, 0x101779b0
 * callees: 0x1003b570
 */

int __stdcall sub_1003B730(int a1)
{
  int v1; // esi
  int v2; // eax
  int v3; // eax
  ldiv_t v4; // rax
  _BYTE v6[8]; // [esp+8h] [ebp-10h] BYREF
  _BYTE v7[8]; // [esp+10h] [ebp-8h] BYREF

  v1 = std::string::end(a1, v6);
  v2 = std::string::begin(a1, v7);
  v3 = sub_1003B570(*(_DWORD **)v2, *(_DWORD *)(v2 + 4), *(_DWORD **)v1, *(_DWORD *)(v1 + 4));
  v4 = ldiv(v3, 127773);
  return 16807 * v4.rem - 2836 * v4.quot + (16807 * v4.rem - 2836 * v4.quot < 0 ? 0x7FFFFFFF : 0);
}
