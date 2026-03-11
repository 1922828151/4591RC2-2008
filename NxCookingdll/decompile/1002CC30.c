/*
 * func-name: sub_1002CC30
 * func-address: 0x1002cc30
 * callers: 0x1002db30
 * callees: 0x10012f90, 0x100149b0
 */

char __thiscall sub_1002CC30(int this)
{
  unsigned int v2; // ebp
  int v3; // esi
  int v4; // ebp
  _DWORD *v5; // esi
  unsigned int v6; // ebp
  int v7; // esi
  unsigned int v9; // [esp+10h] [ebp-8h]
  float v10; // [esp+14h] [ebp-4h]
  float v11; // [esp+14h] [ebp-4h]
  float v12; // [esp+14h] [ebp-4h]

  if ( *(_DWORD *)(this + 236) )
  {
    if ( *(_BYTE *)(this + 285) )
    {
      v2 = 0;
      if ( *(_DWORD *)(this + 212) )
      {
        v3 = 0;
        do
        {
          sub_10012F90((_DWORD *)(this + 80), (float *)(v3 + *(_DWORD *)(this + 236)));
          ++v2;
          v3 += 12;
        }
        while ( v2 < *(_DWORD *)(this + 212) );
      }
    }
  }
  v4 = 0;
  if ( *(_DWORD *)(this + 240) )
  {
    if ( *(_BYTE *)(this + 286) )
    {
      v9 = 0;
      if ( *(_DWORD *)(this + 216) )
      {
        v5 = (_DWORD *)(this + 96);
        do
        {
          v10 = *(float *)(*(_DWORD *)(this + 240) + v4);
          if ( *(_DWORD *)(this + 100) == *v5 )
            sub_100149B0((void *)(this + 96), 1);
          *(float *)(*(_DWORD *)(this + 104) + 4 * (*(_DWORD *)(this + 100))++) = v10;
          v11 = *(float *)(*(_DWORD *)(this + 240) + v4 + 4);
          if ( *(_DWORD *)(this + 100) == *v5 )
            sub_100149B0((void *)(this + 96), 1);
          *(float *)(*(_DWORD *)(this + 104) + 4 * (*(_DWORD *)(this + 100))++) = v11;
          if ( *(_BYTE *)(this + 281) )
          {
            v12 = *(float *)(*(_DWORD *)(this + 240) + v4 + 8);
            if ( *(_DWORD *)(this + 100) == *v5 )
              sub_100149B0((void *)(this + 96), 1);
            *(float *)(*(_DWORD *)(this + 104) + 4 * (*(_DWORD *)(this + 100))++) = v12;
          }
          v4 += 12;
          ++v9;
        }
        while ( v9 < *(_DWORD *)(this + 216) );
      }
    }
  }
  if ( *(_DWORD *)(this + 244) )
  {
    if ( *(_BYTE *)(this + 287) )
    {
      v6 = 0;
      if ( *(_DWORD *)(this + 220) )
      {
        v7 = 0;
        do
        {
          sub_10012F90((_DWORD *)(this + 112), (float *)(v7 + *(_DWORD *)(this + 244)));
          ++v6;
          v7 += 12;
        }
        while ( v6 < *(_DWORD *)(this + 220) );
      }
    }
  }
  return 1;
}
