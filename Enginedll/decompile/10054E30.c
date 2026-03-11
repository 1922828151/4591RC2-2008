/*
 * func-name: ??4BatchRenderer@@QAEAAV0@ABV0@@Z
 * func-address: 0x10054e30
 * callers: none
 * callees: none
 */

int __thiscall BatchRenderer::operator=(int this, int a2)
{
  int result; // eax
  _DWORD *v3; // ecx
  int v4; // edi

  result = this;
  *(_BYTE *)(this + 4) = *(_BYTE *)(a2 + 4);
  *(_DWORD *)(this + 8) = *(_DWORD *)(a2 + 8);
  v3 = (_DWORD *)(this + 12);
  v4 = 256;
  do
  {
    *v3 = *(_DWORD *)((char *)v3 + a2 - result);
    ++v3;
    --v4;
  }
  while ( v4 );
  *(_DWORD *)(result + 1036) = *(_DWORD *)(a2 + 1036);
  *(_DWORD *)(result + 1040) = *(_DWORD *)(a2 + 1040);
  *(_BYTE *)(result + 1044) = *(_BYTE *)(a2 + 1044);
  *(_BYTE *)(result + 1045) = *(_BYTE *)(a2 + 1045);
  *(_DWORD *)(result + 1048) = *(_DWORD *)(a2 + 1048);
  *(_DWORD *)(result + 1052) = *(_DWORD *)(a2 + 1052);
  *(_DWORD *)(result + 1056) = *(_DWORD *)(a2 + 1056);
  return result;
}
