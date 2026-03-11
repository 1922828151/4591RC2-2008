/*
 * func-name: ?WriteSnapshot@Aura@GameClient@@UAE_NAAVBinStream@@@Z_0
 * func-address: 0x101d11a0
 * callers: 0x1000edae
 * callees: 0x10001dfc, 0x1000e575
 */

bool __thiscall GameClient::Aura::WriteSnapshot(GameClient::Aura *this, struct BinStream *a2)
{
  bool result; // al
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // eax
  struct BinStream *v9; // ebx
  int v10; // eax

  result = GameClient::DataObject::WriteSnapshot(this, a2);
  if ( result )
  {
    v4 = *((_DWORD *)a2 + 3);
    if ( (unsigned int)(v4 + 4) <= *((_DWORD *)a2 + 2) )
    {
      *((_DWORD *)this + 4) = *(_DWORD *)(v4 + *((_DWORD *)a2 + 1));
      *((_DWORD *)a2 + 3) += 4;
    }
    v5 = *((_DWORD *)a2 + 3);
    if ( (unsigned int)(v5 + 4) <= *((_DWORD *)a2 + 2) )
    {
      *((_DWORD *)this + 5) = *(_DWORD *)(v5 + *((_DWORD *)a2 + 1));
      *((_DWORD *)a2 + 3) += 4;
    }
    v6 = *((_DWORD *)a2 + 3);
    if ( (unsigned int)(v6 + 4) <= *((_DWORD *)a2 + 2) )
    {
      *((float *)this + 6) = *(float *)(v6 + *((_DWORD *)a2 + 1));
      *((_DWORD *)a2 + 3) += 4;
    }
    v7 = *((_DWORD *)a2 + 3);
    if ( (unsigned int)(v7 + 4) <= *((_DWORD *)a2 + 2) )
    {
      *((float *)this + 7) = *(float *)(v7 + *((_DWORD *)a2 + 1));
      *((_DWORD *)a2 + 3) += 4;
    }
    v8 = *((_DWORD *)a2 + 3);
    if ( (unsigned int)(v8 + 4) > *((_DWORD *)a2 + 2) )
    {
      v9 = a2;
    }
    else
    {
      v9 = *(struct BinStream **)(v8 + *((_DWORD *)a2 + 1));
      *((_DWORD *)a2 + 3) = v8 + 4;
    }
    if ( v9 == (struct BinStream *)-1 )
    {
      LogPrintf("AuraDestID is invalid!");
    }
    else
    {
      v10 = sub_10001DFC((int)v9);
      *((_DWORD *)this + 8) = v10;
      if ( !v10 )
      {
        LogPrintf("AuraDest:%d not found!", v9);
        return 1;
      }
    }
    return 1;
  }
  return result;
}
