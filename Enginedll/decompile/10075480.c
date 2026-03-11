/*
 * func-name: ??4CREDialog@@QAEAAV0@ABV0@@Z
 * func-address: 0x10075480
 * callers: 0x100758f0
 * callees: 0x1000d9a0, 0x100711d0
 */

int __thiscall CREDialog::operator=(int this, int a2)
{
  _WORD *v4; // eax
  int v5; // edx
  int v6; // ecx
  char *v7; // eax
  char *v8; // esi
  char *v9; // edi
  bool v10; // zf
  int v12; // [esp+10h] [ebp+4h]

  sub_100711D0((int **)this, a2);
  *(_BYTE *)(this + 60) = *(_BYTE *)(a2 + 60);
  *(_BYTE *)(this + 61) = *(_BYTE *)(a2 + 61);
  *(_BYTE *)(this + 62) = *(_BYTE *)(a2 + 62);
  *(_DWORD *)(this + 64) = *(_DWORD *)(a2 + 64);
  *(_DWORD *)(this + 68) = *(_DWORD *)(a2 + 68);
  *(_DWORD *)(this + 72) = *(_DWORD *)(a2 + 72);
  *(_DWORD *)(this + 76) = *(_DWORD *)(a2 + 76);
  *(_DWORD *)(this + 80) = *(_DWORD *)(a2 + 80);
  *(_BYTE *)(this + 84) = *(_BYTE *)(a2 + 84);
  *(_BYTE *)(this + 85) = *(_BYTE *)(a2 + 85);
  *(_BYTE *)(this + 86) = *(_BYTE *)(a2 + 86);
  *(_BYTE *)(this + 87) = *(_BYTE *)(a2 + 87);
  *(_DWORD *)(this + 88) = *(_DWORD *)(a2 + 88);
  *(float *)(this + 92) = *(float *)(a2 + 92);
  *(float *)(this + 96) = *(float *)(a2 + 96);
  *(_BYTE *)(this + 100) = *(_BYTE *)(a2 + 100);
  std::wstring::operator=(this + 104, a2 + 104);
  *(_DWORD *)(this + 132) = *(_DWORD *)(a2 + 132);
  *(_DWORD *)(this + 136) = *(_DWORD *)(a2 + 136);
  *(_DWORD *)(this + 140) = *(_DWORD *)(a2 + 140);
  *(_DWORD *)(this + 144) = *(_DWORD *)(a2 + 144);
  *(_DWORD *)(this + 148) = *(_DWORD *)(a2 + 148);
  *(_DWORD *)(this + 152) = *(_DWORD *)(a2 + 152);
  *(double *)(this + 160) = *(double *)(a2 + 160);
  *(_DWORD *)(this + 168) = *(_DWORD *)(a2 + 168);
  *(_DWORD *)(this + 172) = *(_DWORD *)(a2 + 172);
  *(_BYTE *)(this + 176) = *(_BYTE *)(a2 + 176);
  *(_BYTE *)(this + 177) = *(_BYTE *)(a2 + 177);
  *(_BYTE *)(this + 178) = *(_BYTE *)(a2 + 178);
  v4 = (_WORD *)(this + 180);
  v5 = a2 - this;
  v6 = 256;
  do
  {
    *v4 = *(_WORD *)((char *)v4 + v5);
    ++v4;
    --v6;
  }
  while ( v6 );
  *(_DWORD *)(this + 692) = *(_DWORD *)(a2 + 692);
  *(_DWORD *)(this + 696) = *(_DWORD *)(a2 + 696);
  *(_DWORD *)(this + 700) = *(_DWORD *)(a2 + 700);
  *(_DWORD *)(this + 704) = *(_DWORD *)(a2 + 704);
  *(_DWORD *)(this + 708) = *(_DWORD *)(a2 + 708);
  *(_DWORD *)(this + 712) = *(_DWORD *)(a2 + 712);
  *(_DWORD *)(this + 716) = *(_DWORD *)(a2 + 716);
  *(_DWORD *)(this + 720) = *(_DWORD *)(a2 + 720);
  *(_DWORD *)(this + 724) = *(_DWORD *)(a2 + 724);
  *(_DWORD *)(this + 728) = *(_DWORD *)(a2 + 728);
  *(_DWORD *)(this + 732) = *(_DWORD *)(a2 + 732);
  *(_DWORD *)(this + 736) = *(_DWORD *)(a2 + 736);
  *(_DWORD *)(this + 740) = *(_DWORD *)(a2 + 740);
  *(_DWORD *)(this + 744) = *(_DWORD *)(a2 + 744);
  *(_DWORD *)(this + 748) = *(_DWORD *)(a2 + 748);
  *(_DWORD *)(this + 752) = *(_DWORD *)(a2 + 752);
  *(_DWORD *)(this + 756) = *(_DWORD *)(a2 + 756);
  *(_DWORD *)(this + 760) = *(_DWORD *)(a2 + 760);
  *(_DWORD *)(this + 764) = *(_DWORD *)(a2 + 764);
  *(_DWORD *)(this + 768) = *(_DWORD *)(a2 + 768);
  *(_DWORD *)(this + 772) = *(_DWORD *)(a2 + 772);
  *(_DWORD *)(this + 776) = *(_DWORD *)(a2 + 776);
  *(_DWORD *)(this + 780) = *(_DWORD *)(a2 + 780);
  *(_DWORD *)(this + 784) = *(_DWORD *)(a2 + 784);
  qmemcpy((void *)(this + 788), (const void *)(a2 + 788), 0xC4u);
  qmemcpy((void *)(this + 984), (const void *)(a2 + 984), 0xC4u);
  qmemcpy((void *)(this + 1180), (const void *)(a2 + 1180), 0xC4u);
  v7 = (char *)(this + 1376);
  v12 = 12;
  do
  {
    v8 = &v7[v5];
    v9 = v7;
    v7 += 196;
    v10 = v12-- == 1;
    qmemcpy(v9, v8, 0xC4u);
  }
  while ( !v10 );
  *(_DWORD *)(this + 3728) = *(_DWORD *)(a2 + 3728);
  *(_DWORD *)(this + 3732) = *(_DWORD *)(a2 + 3732);
  sub_1000D9A0(this + 3736, a2 + 3736);
  return this;
}
