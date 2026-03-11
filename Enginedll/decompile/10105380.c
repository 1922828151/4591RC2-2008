/*
 * func-name: ??4PostProcessEffect@@QAEAAV0@ABV0@@Z
 * func-address: 0x10105380
 * callers: 0x10105500
 * callees: none
 */

int __thiscall PostProcessEffect::operator=(int this, int a2)
{
  _DWORD *v3; // eax
  int v4; // edi
  int v5; // ecx
  _DWORD *v6; // eax
  int v7; // ecx

  *(_DWORD *)(this + 4) = *(_DWORD *)(a2 + 4);
  *(_DWORD *)(this + 8) = *(_DWORD *)(a2 + 8);
  *(_BYTE *)(this + 12) = *(_BYTE *)(a2 + 12);
  *(_BYTE *)(this + 13) = *(_BYTE *)(a2 + 13);
  *(_BYTE *)(this + 14) = *(_BYTE *)(a2 + 14);
  *(_BYTE *)(this + 15) = *(_BYTE *)(a2 + 15);
  *(_BYTE *)(this + 16) = *(_BYTE *)(a2 + 16);
  std::string::operator=(this + 20, a2 + 20);
  std::string::operator=(this + 48, a2 + 48);
  *(_DWORD *)(this + 76) = *(_DWORD *)(a2 + 76);
  *(_DWORD *)(this + 80) = *(_DWORD *)(a2 + 80);
  *(_DWORD *)(this + 84) = *(_DWORD *)(a2 + 84);
  *(float *)(this + 88) = *(float *)(a2 + 88);
  *(_DWORD *)(this + 92) = *(_DWORD *)(a2 + 92);
  *(_DWORD *)(this + 96) = *(_DWORD *)(a2 + 96);
  *(_DWORD *)(this + 100) = *(_DWORD *)(a2 + 100);
  *(_DWORD *)(this + 104) = *(_DWORD *)(a2 + 104);
  *(_BYTE *)(this + 108) = *(_BYTE *)(a2 + 108);
  *(_BYTE *)(this + 109) = *(_BYTE *)(a2 + 109);
  *(_BYTE *)(this + 110) = *(_BYTE *)(a2 + 110);
  v3 = (_DWORD *)(this + 112);
  v4 = a2 - this;
  v5 = 16;
  do
  {
    *v3 = *(_DWORD *)((char *)v3 + v4);
    v3[1] = *(_DWORD *)((char *)v3 + v4 + 4);
    v3 += 2;
    --v5;
  }
  while ( v5 );
  v6 = (_DWORD *)(this + 240);
  v7 = 16;
  do
  {
    *v6 = *(_DWORD *)((char *)v6 + v4);
    v6[1] = *(_DWORD *)((char *)v6 + v4 + 4);
    v6[2] = *(_DWORD *)((char *)v6 + v4 + 8);
    v6[3] = *(_DWORD *)((char *)v6 + v4 + 12);
    v6 += 4;
    --v7;
  }
  while ( v7 );
  return this;
}
