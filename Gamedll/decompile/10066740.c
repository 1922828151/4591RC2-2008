/*
 * func-name: ??4Func_Receive@GameClient@@QAEAAV01@ABV01@@Z_0
 * func-address: 0x10066740
 * callers: 0x1001304d
 * callees: 0x1000bfb9, 0x100167a7
 */

int __thiscall GameClient::Func_Receive::operator=(int this, int a2)
{
  int result; // eax

  *(_DWORD *)(this + 4) = *(_DWORD *)(a2 + 4);
  *(_DWORD *)(this + 8) = *(_DWORD *)(a2 + 8);
  *(_DWORD *)(this + 12) = *(_DWORD *)(a2 + 12);
  *(_DWORD *)(this + 20) = *(_DWORD *)(a2 + 20);
  *(_DWORD *)(this + 24) = *(_DWORD *)(a2 + 24);
  *(_DWORD *)(this + 28) = *(_DWORD *)(a2 + 28);
  *(_DWORD *)(this + 32) = *(_DWORD *)(a2 + 32);
  *(_BYTE *)(this + 36) = *(_BYTE *)(a2 + 36);
  *(_DWORD *)(this + 40) = *(_DWORD *)(a2 + 40);
  if ( this + 44 != a2 + 44 )
    sub_1000BFB9(a2 + 44);
  if ( this + 84 != a2 + 84 )
    sub_100167A7(a2 + 84);
  *(_DWORD *)(this + 124) = *(_DWORD *)(a2 + 124);
  *(_DWORD *)(this + 128) = *(_DWORD *)(a2 + 128);
  *(_DWORD *)(this + 132) = *(_DWORD *)(a2 + 132);
  *(float *)(this + 136) = *(float *)(a2 + 136);
  result = this;
  *(float *)(this + 140) = *(float *)(a2 + 140);
  return result;
}
