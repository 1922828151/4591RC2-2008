/*
 * func-name: sub_101F1170
 * func-address: 0x101f1170
 * callers: 0x100178f0
 * callees: 0x10003d82, 0x10009d68, 0x1000b1a4, 0x1000bc76, 0x1000f5d3, 0x10017db9, 0x102c9d62, 0x102ca13e
 */

int __stdcall sub_101F1170(Event *a1)
{
  struct BinStream *Stream; // esi
  int v2; // eax
  size_t v3; // edi
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // edi
  int v11; // esi
  int v13; // [esp+0h] [ebp-F4h]
  int v14; // [esp+0h] [ebp-F4h]
  int v15; // [esp+4h] [ebp-F0h]
  int v16; // [esp+4h] [ebp-F0h]
  int v17; // [esp+10h] [ebp-E4h]
  int v18; // [esp+14h] [ebp-E0h] BYREF
  _BYTE v19[40]; // [esp+18h] [ebp-DCh] BYREF
  int v20; // [esp+40h] [ebp-B4h]
  int v21; // [esp+44h] [ebp-B0h]
  int v22; // [esp+48h] [ebp-ACh]
  int v23; // [esp+4Ch] [ebp-A8h]
  int v24; // [esp+F0h] [ebp-4h]

  sub_10017DB9(v13, v15);
  v24 = 0;
  Stream = Event::GetStream(a1);
  v2 = *((_DWORD *)Stream + 3);
  if ( (unsigned int)(v2 + 4) <= *((_DWORD *)Stream + 2) )
  {
    v18 = *(_DWORD *)(v2 + *((_DWORD *)Stream + 1));
    *((_DWORD *)Stream + 3) += 4;
  }
  v3 = sub_10003D82();
  v4 = *((_DWORD *)Stream + 3);
  if ( v4 + v3 <= *((_DWORD *)Stream + 2) )
  {
    memcpy(byte_103B6158, (const void *)(v4 + *((_DWORD *)Stream + 1)), v3);
    byte_103B6158[v3] = 0;
    std::string::operator=(v19, byte_103B6158);
    *((_DWORD *)Stream + 3) += v3;
  }
  v5 = *((_DWORD *)Stream + 3);
  if ( (unsigned int)(v5 + 4) <= *((_DWORD *)Stream + 2) )
  {
    v20 = *(_DWORD *)(v5 + *((_DWORD *)Stream + 1));
    *((_DWORD *)Stream + 3) += 4;
  }
  v6 = *((_DWORD *)Stream + 3);
  if ( (unsigned int)(v6 + 4) <= *((_DWORD *)Stream + 2) )
  {
    v21 = *(_DWORD *)(v6 + *((_DWORD *)Stream + 1));
    *((_DWORD *)Stream + 3) += 4;
  }
  v7 = *((_DWORD *)Stream + 3);
  if ( (unsigned int)(v7 + 4) <= *((_DWORD *)Stream + 2) )
  {
    v22 = *(_DWORD *)(v7 + *((_DWORD *)Stream + 1));
    *((_DWORD *)Stream + 3) += 4;
  }
  v8 = *((_DWORD *)Stream + 3);
  if ( (unsigned int)(v8 + 4) <= *((_DWORD *)Stream + 2) )
  {
    v23 = *(_DWORD *)(v8 + *((_DWORD *)Stream + 1));
    *((_DWORD *)Stream + 3) += 4;
  }
  v9 = *((_DWORD *)Stream + 3);
  if ( (unsigned int)(v9 + 4) > *((_DWORD *)Stream + 2) )
  {
    v10 = v17;
  }
  else
  {
    v10 = *(_DWORD *)(v9 + *((_DWORD *)Stream + 1));
    *((_DWORD *)Stream + 3) = v9 + 4;
  }
  v11 = sub_10009D68(v18);
  if ( v11 )
    sub_1000B1A4((int)&v18);
  else
    v11 = sub_1000F5D3((int)&v18);
  *(_DWORD *)(v11 + 216) = v10;
  v24 = -1;
  return sub_1000BC76(v14, v16);
}
