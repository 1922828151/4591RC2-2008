/*
 * func-name: ?WriteSynaData@FACapability@GameClient@@UAE_NAAVBinStream@@@Z_0
 * func-address: 0x10247710
 * callers: 0x10012ae9
 * callees: 0x10001dfc, 0x1001990c
 */

char __thiscall GameClient::FACapability::WriteSynaData(GameClient::FACapability *this, struct BinStream *a2)
{
  unsigned int v3; // edx
  unsigned int v4; // eax
  int v5; // eax
  int v6; // ecx
  struct BinStream *v7; // eax
  int v8; // eax
  int v9; // ecx
  int v10; // edx
  int v11; // ecx

  if ( !GameClient::FAura::WriteSynaData(this, a2) )
    return 0;
  v3 = *((_DWORD *)a2 + 2);
  v4 = *((_DWORD *)a2 + 3) + 4;
  if ( v4 <= v3 )
    *((_DWORD *)a2 + 3) = v4;
  v5 = *((_DWORD *)a2 + 3);
  v6 = v5 + 4;
  if ( v5 + 4 > v3 )
  {
    v7 = a2;
  }
  else
  {
    v7 = *(struct BinStream **)(v5 + *((_DWORD *)a2 + 1));
    *((_DWORD *)a2 + 3) = v6;
  }
  v8 = sub_10001DFC((int)v7);
  if ( !v8 )
    return 0;
  v9 = *((_DWORD *)a2 + 3);
  v10 = v9 + 4;
  if ( (unsigned int)(v9 + 4) > *((_DWORD *)a2 + 2) )
  {
    *(_DWORD *)(v8 + 136) = a2;
  }
  else
  {
    v11 = *(_DWORD *)(v9 + *((_DWORD *)a2 + 1));
    *((_DWORD *)a2 + 3) = v10;
    *(_DWORD *)(v8 + 136) = v11;
  }
  return 1;
}
