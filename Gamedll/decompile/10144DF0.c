/*
 * func-name: ?WriteData@Booty@GameClient@@QAEXAAVBinStream@@@Z_0
 * func-address: 0x10144df0
 * callers: 0x100141e6
 * callees: 0x10004610
 */

void __thiscall GameClient::Booty::WriteData(GameClient::Booty *this, struct BinStream *a2)
{
  struct BinStream *v2; // esi
  int v3; // eax
  int v5; // ebp
  unsigned int v6; // ecx
  int v7; // eax
  int v8; // edx
  char v9; // bl
  int v10; // eax
  int v11; // eax
  struct BinStream *v12; // ebx
  char *v13; // edi
  unsigned int v14; // ebp
  int v15; // ecx
  int v16; // ecx
  int v17; // ebx
  int v18; // eax
  int v19; // eax

  v2 = a2;
  v3 = *((_DWORD *)a2 + 3);
  if ( (unsigned int)(v3 + 4) <= *((_DWORD *)a2 + 2) )
  {
    *((_DWORD *)this + 44) = *(_DWORD *)(v3 + *((_DWORD *)a2 + 1));
    *((_DWORD *)a2 + 3) += 4;
  }
  v5 = *((_DWORD *)a2 + 3);
  v6 = *((_DWORD *)a2 + 2);
  v7 = v5 + 1;
  if ( v5 + 1 <= v6 )
  {
    v8 = *((_DWORD *)a2 + 1);
    v9 = *(_BYTE *)(v8 + v5);
    *((_DWORD *)a2 + 3) = v7;
    if ( v9 )
    {
      if ( v5 + 5 <= v6 )
      {
        *((float *)this + 41) = *(float *)(v7 + v8);
        *((_DWORD *)a2 + 3) += 4;
      }
      v10 = *((_DWORD *)a2 + 3);
      if ( (unsigned int)(v10 + 4) <= *((_DWORD *)a2 + 2) )
      {
        *((float *)this + 42) = *(float *)(v10 + *((_DWORD *)a2 + 1));
        *((_DWORD *)a2 + 3) += 4;
      }
      v11 = *((_DWORD *)a2 + 3);
      if ( (unsigned int)(v11 + 4) > *((_DWORD *)a2 + 2) )
      {
        v12 = a2;
      }
      else
      {
        v12 = *(struct BinStream **)(v11 + *((_DWORD *)a2 + 1));
        a2 = v12;
        *((_DWORD *)v2 + 3) = v11 + 4;
      }
      v13 = (char *)this + 148;
      sub_10004610((int)v12, 0, 0);
      v14 = 0;
      if ( (int)v12 > 0 )
      {
        do
        {
          v15 = *((_DWORD *)v13 + 1);
          if ( !v15 || v14 >= (*((_DWORD *)v13 + 2) - v15) >> 3 )
            _invalid_parameter_noinfo();
          v16 = *((_DWORD *)v13 + 1);
          v17 = 8 * v14 + v16;
          if ( !v16 || v14 >= (*((_DWORD *)v13 + 2) - v16) >> 3 )
            _invalid_parameter_noinfo();
          v18 = *((_DWORD *)v2 + 3);
          if ( (unsigned int)(v18 + 4) <= *((_DWORD *)v2 + 2) )
          {
            *(_DWORD *)(*((_DWORD *)v13 + 1) + 8 * v14) = *(_DWORD *)(v18 + *((_DWORD *)v2 + 1));
            *((_DWORD *)v2 + 3) += 4;
          }
          v19 = *((_DWORD *)v2 + 3);
          if ( (unsigned int)(v19 + 4) <= *((_DWORD *)v2 + 2) )
          {
            *(_DWORD *)(v17 + 4) = *(_DWORD *)(v19 + *((_DWORD *)v2 + 1));
            *((_DWORD *)v2 + 3) += 4;
          }
          ++v14;
        }
        while ( (int)v14 < (int)a2 );
      }
    }
  }
}
