/*
 * func-name: sub_1000E370
 * func-address: 0x1000e370
 * callers: 0x1000ee20
 * callees: 0x1000e060, 0x10014910, 0x10034f10
 */

char __thiscall sub_1000E370(unsigned int *this, unsigned int a2, unsigned int *a3, int a4)
{
  int (__thiscall ***v6)(_DWORD, int, int); // eax
  void *v7; // eax
  int v8; // eax
  unsigned int v9; // edx
  int v10; // ecx
  int v11; // ecx
  unsigned int v12; // ecx
  unsigned int v13; // eax
  int v14; // edx
  unsigned int v15; // eax
  int v16; // edi
  int (__thiscall ***v17)(_DWORD, int, int); // eax
  int v18; // eax
  unsigned int v19; // ecx
  int v20; // eax
  int v21; // edx
  int v22; // edx
  unsigned int v23; // ecx
  int v24; // eax

  if ( !sub_1000E060(this, a2, a3, a4) )
    return 0;
  v6 = (int (__thiscall ***)(_DWORD, int, int))sub_10014910();
  v7 = (void *)(**v6)(v6, 8 * *this, 8);
  this[4] = (unsigned int)v7;
  if ( !v7 )
    return 0;
  memset(v7, 0, 8 * *this);
  if ( a2 )
  {
    v8 = 0;
    v9 = a2;
    do
    {
      ++*(_WORD *)(this[4] + 8 * *(_DWORD *)(v8 + this[3]) + 2);
      v10 = *(_DWORD *)(v8 + this[3] + 4);
      ++*(_WORD *)(this[4] + 8 * v10 + 2);
      v11 = *(_DWORD *)(v8 + this[3] + 8);
      ++*(_WORD *)(this[4] + 8 * v11 + 2);
      v8 += 12;
      --v9;
    }
    while ( v9 );
  }
  v12 = 1;
  for ( *(_DWORD *)(this[4] + 4) = 0; v12 < *this; *(_DWORD *)(v15 + 4) = v14 )
  {
    v13 = this[4];
    v14 = *(_DWORD *)(v13 + 8 * v12 - 4) + *(unsigned __int16 *)(v13 + 8 * v12 - 6);
    v15 = v13 + 8 * v12++;
  }
  v16 = *(_DWORD *)(this[4] + 8 * *this - 4) + *(unsigned __int16 *)(this[4] + 8 * *this - 6);
  v17 = (int (__thiscall ***)(_DWORD, int, int))sub_10014910();
  v18 = (**v17)(v17, 4 * v16, 53);
  this[5] = v18;
  if ( !v18 )
    return 0;
  v19 = 0;
  if ( a2 )
  {
    v20 = 0;
    do
    {
      *(_DWORD *)(this[5] + 4 * (*(_DWORD *)(this[4] + 8 * *(_DWORD *)(v20 + this[3]) + 4))++) = v19;
      *(_DWORD *)(this[5] + 4 * *(_DWORD *)(this[4] + 8 * *(_DWORD *)(v20 + this[3] + 4) + 4)) = v19;
      v21 = *(_DWORD *)(v20 + this[3] + 4);
      ++*(_DWORD *)(this[4] + 8 * v21 + 4);
      *(_DWORD *)(this[5] + 4 * *(_DWORD *)(this[4] + 8 * *(_DWORD *)(v20 + this[3] + 8) + 4)) = v19;
      v22 = *(_DWORD *)(v20 + this[3] + 8);
      ++*(_DWORD *)(this[4] + 8 * v22 + 4);
      ++v19;
      v20 += 12;
    }
    while ( v19 < a2 );
  }
  v23 = 1;
  for ( *(_DWORD *)(this[4] + 4) = 0;
        v23 < *this;
        *(_DWORD *)(v24 + 4) = *(_DWORD *)(v24 - 4) + *(unsigned __int16 *)(v24 - 6) )
  {
    v24 = this[4] + 8 * v23++;
  }
  return 1;
}
