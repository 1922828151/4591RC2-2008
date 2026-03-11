/*
 * func-name: sub_100201A0
 * func-address: 0x100201a0
 * callers: 0x10020e00
 * callees: 0x1000c970, 0x10014910, 0x10015590
 */

char __thiscall sub_100201A0(_DWORD *this)
{
  _DWORD *v2; // edx
  int v3; // ecx
  unsigned __int16 *v4; // eax
  int v5; // esi
  int v6; // ebx
  int (__stdcall ***v7)(size_t, int); // eax
  int (__stdcall ***v8)(size_t, int); // eax
  int v9; // edx
  _DWORD *v11; // ecx
  int v12; // edx
  unsigned int v13; // ebx
  unsigned __int8 *v14; // esi
  unsigned int v15; // edi
  int v16; // edx
  bool v17; // zf
  int v18; // eax
  int v19; // esi
  unsigned int v20; // ebx
  int v21; // edi
  int v22; // eax
  int v23; // ecx
  int v24; // edx
  int v25; // eax
  int v26; // [esp+Ch] [ebp-28h]
  int v27; // [esp+10h] [ebp-24h]
  unsigned int v28; // [esp+14h] [ebp-20h]
  float v29[3]; // [esp+18h] [ebp-1Ch] BYREF
  float v30[4]; // [esp+24h] [ebp-10h] BYREF

  v2 = (_DWORD *)this[1];
  v3 = v2[9];
  if ( !v3 )
    return 0;
  v4 = (unsigned __int16 *)v2[10];
  if ( !v4 )
    return 0;
  v5 = 0;
  do
  {
    v6 = *v4;
    v4 += 18;
    --v3;
    v5 = v5 + v6 - 2;
  }
  while ( v3 );
  if ( v2[2] )
  {
    v7 = sub_10014910();
    ((void (__thiscall *)(int (__stdcall ***)(size_t, int), _DWORD))(*v7)[3])(v7, *(_DWORD *)(this[1] + 8));
    *(_DWORD *)(this[1] + 8) = 0;
  }
  v8 = sub_10014910();
  *(_DWORD *)(this[1] + 8) = ((int (__thiscall *)(int (__stdcall ***)(size_t, int), int, _DWORD))**v8)(v8, 12 * v5, 0);
  v9 = this[1];
  if ( !*(_DWORD *)(v9 + 8) )
    return 0;
  *(_DWORD *)(v9 + 4) = v5;
  v11 = *(_DWORD **)(this[1] + 8);
  v28 = 0;
  if ( *(_DWORD *)(this[1] + 36) )
  {
    v26 = 0;
    do
    {
      v12 = *(_DWORD *)(this[1] + 40);
      v13 = *(unsigned __int16 *)(v26 + v12);
      v14 = *(unsigned __int8 **)(v26 + v12 + 4);
      if ( v13 != 2 )
      {
        v15 = 2;
        v27 = v13 - 2;
        do
        {
          *v11 = *v14;
          v11 += 3;
          *(v11 - 2) = v14[(v15 - 1) % v13];
          v16 = v15 % v13;
          ++v15;
          v17 = v27-- == 1;
          *(v11 - 1) = v14[v16];
        }
        while ( !v17 );
      }
      v26 += 36;
      ++v28;
    }
    while ( v28 < *(_DWORD *)(this[1] + 36) );
  }
  sub_1000C970((_DWORD *)this[1], v29);
  v18 = this[1];
  v19 = *(_DWORD *)(v18 + 16);
  v20 = 0;
  if ( *(_DWORD *)(v18 + 4) )
  {
    v21 = 0;
    do
    {
      sub_10015590(
        v30,
        (float *)(v19 + 12 * *(_DWORD *)(*(_DWORD *)(this[1] + 8) + v21)),
        (float *)(v19 + 12 * *(_DWORD *)(*(_DWORD *)(this[1] + 8) + v21 + 4)),
        (float *)(v19 + 12 * *(_DWORD *)(*(_DWORD *)(this[1] + 8) + v21 + 8)));
      if ( v29[1] * v30[1] + v30[0] * v29[0] + v29[2] * v30[2] + v30[3] > 0.0 )
      {
        v22 = *(_DWORD *)(this[1] + 8);
        v23 = *(_DWORD *)(v22 + v21 + 8);
        v24 = *(_DWORD *)(v22 + v21 + 4);
        v25 = v21 + v22;
        *(_DWORD *)(v25 + 8) = v24;
        *(_DWORD *)(v25 + 4) = v23;
      }
      ++v20;
      v21 += 12;
    }
    while ( v20 < *(_DWORD *)(this[1] + 4) );
  }
  return 1;
}
