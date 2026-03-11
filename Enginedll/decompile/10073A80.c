/*
 * func-name: ??4CInputBox@@QAEAAV0@ABV0@@Z
 * func-address: 0x10073a80
 * callers: none
 * callees: 0x100718a0
 */

int __thiscall CInputBox::operator=(int this, int a2)
{
  _WORD *v3; // eax
  int v4; // edx

  CREStatic::operator=(this, a2);
  *(_BYTE *)(this + 696) = *(_BYTE *)(a2 + 696);
  *(_DWORD *)(this + 700) = *(_DWORD *)(a2 + 700);
  v3 = (_WORD *)(this + 704);
  v4 = 256;
  do
  {
    *v3 = *(_WORD *)((char *)v3 + a2 - this);
    ++v3;
    --v4;
  }
  while ( v4 );
  *(_DWORD *)(this + 1216) = *(_DWORD *)(a2 + 1216);
  *(_DWORD *)(this + 1220) = *(_DWORD *)(a2 + 1220);
  *(float *)(this + 1224) = *(float *)(a2 + 1224);
  return this;
}
