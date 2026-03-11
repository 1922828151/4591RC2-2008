/*
 * func-name: sub_101F10A0
 * func-address: 0x101f10a0
 * callers: 0x1001122a
 * callees: 0x1000bc76, 0x1000f5d3, 0x10017db9, 0x102c9d62
 */

int __stdcall sub_101F10A0(Event *a1)
{
  struct BinStream *Stream; // eax
  int v2; // ecx
  int v3; // esi
  int v5; // [esp+0h] [ebp-ECh]
  int v6; // [esp+0h] [ebp-ECh]
  int v7; // [esp+4h] [ebp-E8h]
  int v8; // [esp+4h] [ebp-E8h]
  int v9; // [esp+8h] [ebp-E4h]
  _DWORD v10[52]; // [esp+Ch] [ebp-E0h] BYREF
  int v11; // [esp+E8h] [ebp-4h]

  Stream = Event::GetStream(a1);
  v2 = *((_DWORD *)Stream + 3);
  if ( (unsigned int)(v2 + 4) > *((_DWORD *)Stream + 2) )
  {
    v3 = v9;
  }
  else
  {
    v3 = *(_DWORD *)(v2 + *((_DWORD *)Stream + 1));
    *((_DWORD *)Stream + 3) = v2 + 4;
  }
  sub_10017DB9(v5, v7);
  v11 = 0;
  v10[0] = v3;
  sub_1000F5D3((int)v10);
  v11 = -1;
  return sub_1000BC76(v6, v8);
}
