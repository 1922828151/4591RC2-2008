/*
 * func-name: ?WriteSnapshot@Func_Receive@GameClient@@UAE_NAAVBinStream@@@Z_0
 * func-address: 0x101c0520
 * callers: 0x10011202
 * callees: 0x10003d19
 */

bool __thiscall GameClient::Func_Receive::WriteSnapshot(GameClient::Func_Receive *this, struct BinStream *a2)
{
  bool result; // al
  int v4; // ecx
  _DWORD *v5; // eax
  int v6; // eax
  int v7; // eax

  result = GameClient::Function::WriteSnapshot(this, a2);
  if ( result )
  {
    v4 = *((_DWORD *)a2 + 3);
    if ( (unsigned int)(v4 + 12) <= *((_DWORD *)a2 + 2) )
    {
      v5 = (_DWORD *)(v4 + *((_DWORD *)a2 + 1));
      *((_DWORD *)this + 27) = *v5;
      *((_DWORD *)this + 28) = v5[1];
      *((_DWORD *)this + 29) = v5[2];
      *((_DWORD *)a2 + 3) += 12;
    }
    v6 = *((_DWORD *)a2 + 3);
    if ( (unsigned int)(v6 + 4) <= *((_DWORD *)a2 + 2) )
    {
      *((float *)this + 30) = *(float *)(v6 + *((_DWORD *)a2 + 1));
      *((_DWORD *)a2 + 3) += 4;
    }
    v7 = *((_DWORD *)a2 + 3);
    if ( (unsigned int)(v7 + 4) <= *((_DWORD *)a2 + 2) )
    {
      *((float *)this + 31) = *(float *)(v7 + *((_DWORD *)a2 + 1));
      *((_DWORD *)a2 + 3) += 4;
    }
    return 1;
  }
  return result;
}
