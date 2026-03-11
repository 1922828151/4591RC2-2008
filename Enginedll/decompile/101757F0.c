/*
 * func-name: sub_101757F0
 * func-address: 0x101757f0
 * callers: 0x10174d80
 * callees: 0x1001e860, 0x1001e8f0
 */

int __thiscall sub_101757F0(_DWORD *this, _DWORD *a2)
{
  int v3; // edi
  _DWORD *v4; // ebx
  int result; // eax

  v3 = this[1];
  v4 = sub_1001E860(v3, *(_DWORD *)(v3 + 4), a2);
  result = sub_1001E8F0(this, 1u);
  *(_DWORD *)(v3 + 4) = v4;
  *(_DWORD *)v4[1] = v4;
  return result;
}
