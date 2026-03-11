/*
 * func-name: sub_100608D0
 * func-address: 0x100608d0
 * callers: none
 * callees: 0x100204a0, 0x10060720, 0x100618a0, 0x10061f30, 0x101a26c0
 */

int __thiscall sub_100608D0(int this, float *a2, int a3)
{
  int v4; // ecx
  unsigned int v5; // esi
  unsigned int v6; // ebp
  void **v7; // esi
  void *v8; // eax
  double v9; // st6
  double v10; // st7
  double v11; // st6
  double v12; // st4
  int v13; // esi
  double v14; // rt1
  double v15; // rt2
  double v16; // st4
  double v17; // st6
  double v18; // rtt
  int v19; // edx
  int v20; // ecx
  double v21; // st2
  float v23[2]; // [esp+Ch] [ebp-20h] BYREF
  int v24[3]; // [esp+14h] [ebp-18h] BYREF
  int v25[3]; // [esp+20h] [ebp-Ch] BYREF
  float v26; // [esp+30h] [ebp+4h]
  float v27; // [esp+30h] [ebp+4h]
  float v28; // [esp+30h] [ebp+4h]

  v4 = *(_DWORD *)(this + 52);
  *(_DWORD *)(this + 60) = 0;
  (*(void (__thiscall **)(int))(*(_DWORD *)v4 + 4))(v4);
  v5 = *(_DWORD *)(this + 12);
  if ( *(_DWORD *)(this + 8) > v5 )
    invalid_parameter_noinfo();
  v6 = *(_DWORD *)(this + 8);
  if ( v6 > *(_DWORD *)(this + 12) )
    invalid_parameter_noinfo();
  sub_100204A0((_DWORD *)(this + 4), v23, this + 4, v6, this + 4, v5);
  v7 = (void **)(this + 20);
  sub_100618A0(this + 20);
  if ( *(_DWORD *)(this + 28) != -1 )
  {
    if ( *v7 )
    {
      free(*v7);
      *v7 = 0;
    }
    *(_DWORD *)(this + 24) = 0;
  }
  *(_DWORD *)(this + 44) = *(_DWORD *)(this + 20);
  *(_WORD *)(this + 36) = -1;
  *(_WORD *)(this + 40) = 0;
  *(_DWORD *)(this + 56) = 0;
  *(_DWORD *)(this + 48) = 0;
  sub_10061F30(256);
  if ( *(int *)(this + 24) < 256 && *(_DWORD *)(this + 28) != -1 )
  {
    *(_DWORD *)(this + 24) = 256;
    if ( *v7 )
      v8 = realloc(*v7, 0x2C00u);
    else
      v8 = malloc(0x2C00u);
    *v7 = v8;
  }
  *(_DWORD *)(this + 44) = *(_DWORD *)(this + 20);
  v9 = a2[1] / flt_10280DE8;
  v24[0] = (int)(*a2 * 0.015625);
  v10 = 0.015625 * a2[2];
  v24[1] = (int)((double)(int)v9 * 4.0);
  v11 = 1.0;
  v24[2] = (int)v10;
  v12 = 2.0;
  v13 = 0;
  while ( 1 )
  {
    if ( v13 == 1 )
    {
      v18 = v12;
      v26 = 4.0;
      v16 = v11;
      v17 = v18;
    }
    else
    {
      v15 = v12;
      v16 = v11;
      v17 = v15;
      v26 = v16;
    }
    v19 = v24[v13];
    v20 = (int)v26;
    v23[0] = *(float *)(a3 + 4 * v13) - (double)v19 * 64.0;
    v27 = (double)v20 * 64.0;
    v21 = v27;
    if ( v27 < (double)v23[0] )
    {
      do
      {
        v20 *= 2;
        v28 = v21 * v17;
        v21 = v28;
      }
      while ( v28 < (double)v23[0] );
    }
    v25[v13++] = v20 + v19;
    if ( v13 >= 3 )
      break;
    v14 = v16;
    v12 = v17;
    v11 = v14;
  }
  sub_10060720((_DWORD *)(this - 4), v24, v25);
  return (***(int (__thiscall ****)(_DWORD, int))(this + 52))(*(_DWORD *)(this + 52), this - 4);
}
