/*
 * func-name: ?WriteSnapshot@Func_Power@GameClient@@UAE_NAAVBinStream@@@Z_0
 * func-address: 0x101bf770
 * callers: 0x1000a2fe
 * callees: 0x10003d19
 */

bool __thiscall GameClient::Func_Power::WriteSnapshot(GameClient::Func_Power *this, struct BinStream *a2)
{
  bool result; // al
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // ecx
  int v11; // ecx
  int v12; // ecx
  int v13; // edx
  _DWORD *v14; // ecx
  int v15; // ecx
  int v16; // ecx

  result = GameClient::Function::WriteSnapshot(this, a2);
  if ( result )
  {
    v4 = *((_DWORD *)a2 + 3);
    if ( (unsigned int)(v4 + 8) <= *((_DWORD *)a2 + 2) )
    {
      *((double *)this + 4) = *(double *)(v4 + *((_DWORD *)a2 + 1));
      *((_DWORD *)a2 + 3) += 8;
    }
    v5 = *((_DWORD *)a2 + 3);
    if ( (unsigned int)(v5 + 8) <= *((_DWORD *)a2 + 2) )
    {
      *((double *)this + 5) = *(double *)(v5 + *((_DWORD *)a2 + 1));
      *((_DWORD *)a2 + 3) += 8;
    }
    v6 = *((_DWORD *)a2 + 3);
    if ( (unsigned int)(v6 + 8) <= *((_DWORD *)a2 + 2) )
    {
      *((double *)this + 6) = *(double *)(v6 + *((_DWORD *)a2 + 1));
      *((_DWORD *)a2 + 3) += 8;
    }
    v7 = *((_DWORD *)a2 + 3);
    if ( (unsigned int)(v7 + 8) <= *((_DWORD *)a2 + 2) )
    {
      *((double *)this + 7) = *(double *)(v7 + *((_DWORD *)a2 + 1));
      *((_DWORD *)a2 + 3) += 8;
    }
    v8 = *((_DWORD *)a2 + 3);
    if ( (unsigned int)(v8 + 8) <= *((_DWORD *)a2 + 2) )
    {
      *((double *)this + 8) = *(double *)(v8 + *((_DWORD *)a2 + 1));
      *((_DWORD *)a2 + 3) += 8;
    }
    v9 = *((_DWORD *)a2 + 3);
    if ( (unsigned int)(v9 + 8) <= *((_DWORD *)a2 + 2) )
    {
      *((double *)this + 9) = *(double *)(v9 + *((_DWORD *)a2 + 1));
      *((_DWORD *)a2 + 3) += 8;
    }
    v10 = *((_DWORD *)a2 + 3);
    result = 1;
    if ( (unsigned int)(v10 + 1) <= *((_DWORD *)a2 + 2) )
    {
      *((_BYTE *)this + 112) = *(_BYTE *)(v10 + *((_DWORD *)a2 + 1));
      ++*((_DWORD *)a2 + 3);
    }
    v11 = *((_DWORD *)a2 + 3);
    if ( (unsigned int)(v11 + 1) <= *((_DWORD *)a2 + 2) )
    {
      *((_BYTE *)this + 128) = *(_BYTE *)(v11 + *((_DWORD *)a2 + 1));
      ++*((_DWORD *)a2 + 3);
    }
    v12 = *((_DWORD *)a2 + 3);
    if ( (unsigned int)(v12 + 1) <= *((_DWORD *)a2 + 2) )
    {
      *((_BYTE *)this + 172) = *(_BYTE *)(v12 + *((_DWORD *)a2 + 1));
      ++*((_DWORD *)a2 + 3);
    }
    if ( *((_BYTE *)this + 172) )
    {
      v13 = *((_DWORD *)a2 + 3);
      if ( (unsigned int)(v13 + 12) <= *((_DWORD *)a2 + 2) )
      {
        v14 = (_DWORD *)(v13 + *((_DWORD *)a2 + 1));
        *((_DWORD *)this + 44) = *v14;
        *((_DWORD *)this + 45) = v14[1];
        *((_DWORD *)this + 46) = v14[2];
        *((_DWORD *)a2 + 3) += 12;
      }
      v15 = *((_DWORD *)a2 + 3);
      if ( (unsigned int)(v15 + 4) <= *((_DWORD *)a2 + 2) )
      {
        *((float *)this + 47) = *(float *)(v15 + *((_DWORD *)a2 + 1));
        *((_DWORD *)a2 + 3) += 4;
      }
      v16 = *((_DWORD *)a2 + 3);
      if ( (unsigned int)(v16 + 4) <= *((_DWORD *)a2 + 2) )
      {
        *((float *)this + 48) = *(float *)(v16 + *((_DWORD *)a2 + 1));
        *((_DWORD *)a2 + 3) += 4;
      }
    }
  }
  return result;
}
