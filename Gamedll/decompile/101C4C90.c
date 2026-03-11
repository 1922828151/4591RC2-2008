/*
 * func-name: ?WriteSnapshot@Func_Sheild@GameClient@@UAE_NAAVBinStream@@@Z_0
 * func-address: 0x101c4c90
 * callers: 0x10007fbd
 * callees: 0x10003d19
 */

bool __thiscall GameClient::Func_Sheild::WriteSnapshot(GameClient::Func_Sheild *this, struct BinStream *a2)
{
  bool result; // al
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // ecx
  int v8; // eax
  int v9; // edx
  int v10; // eax

  result = GameClient::Function::WriteSnapshot(this, a2);
  if ( result )
  {
    v4 = *((_DWORD *)a2 + 3);
    if ( (unsigned int)(v4 + 4) <= *((_DWORD *)a2 + 2) )
    {
      *((_DWORD *)this + 10) = *(_DWORD *)(v4 + *((_DWORD *)a2 + 1));
      *((_DWORD *)a2 + 3) += 4;
    }
    v5 = *((_DWORD *)a2 + 3);
    if ( (unsigned int)(v5 + 4) <= *((_DWORD *)a2 + 2) )
    {
      *((float *)this + 11) = *(float *)(v5 + *((_DWORD *)a2 + 1));
      *((_DWORD *)a2 + 3) += 4;
    }
    v6 = *((_DWORD *)a2 + 3);
    if ( (unsigned int)(v6 + 4) <= *((_DWORD *)a2 + 2) )
    {
      *((float *)this + 12) = *(float *)(v6 + *((_DWORD *)a2 + 1));
      *((_DWORD *)a2 + 3) += 4;
    }
    v7 = *((_DWORD *)a2 + 3);
    if ( (unsigned int)(v7 + 12) <= *((_DWORD *)a2 + 2) )
    {
      v8 = *((_DWORD *)a2 + 1);
      v9 = *(_DWORD *)(v8 + v7);
      v10 = v7 + v8;
      *((_DWORD *)this + 13) = v9;
      *((_DWORD *)this + 14) = *(_DWORD *)(v10 + 4);
      *((_DWORD *)this + 15) = *(_DWORD *)(v10 + 8);
      *((_DWORD *)a2 + 3) += 12;
    }
    return 1;
  }
  return result;
}
