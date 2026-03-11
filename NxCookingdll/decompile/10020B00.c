/*
 * func-name: sub_10020B00
 * func-address: 0x10020b00
 * callers: 0x10020d70
 * callees: 0x1002b890, 0x1002bbe0, 0x1002ceb0, 0x1002cf30, 0x1002db30, 0x10034f10
 */

char __cdecl sub_10020B00(unsigned int *a1, unsigned int *a2, int a3, int a4)
{
  unsigned int v4; // ecx
  unsigned int *v5; // esi
  unsigned int v6; // eax
  unsigned int v8; // edi
  int *v9; // esi
  int v10; // edx
  int v11; // eax
  unsigned int v12; // eax
  unsigned int v13; // edx
  int v14; // edi
  int v15; // eax
  float *v16; // ecx
  unsigned int v17; // edx
  _DWORD *v18; // ecx
  _DWORD *v19; // eax
  char *v20; // esi
  unsigned int v21; // [esp+Ch] [ebp-1D4h] BYREF
  unsigned int v22; // [esp+10h] [ebp-1D0h]
  int v23; // [esp+14h] [ebp-1CCh]
  int v24; // [esp+18h] [ebp-1C8h]
  int v25; // [esp+1Ch] [ebp-1C4h]
  int v26; // [esp+20h] [ebp-1C0h]
  int v27; // [esp+24h] [ebp-1BCh]
  int v28; // [esp+28h] [ebp-1B8h]
  int v29; // [esp+2Ch] [ebp-1B4h]
  int v30; // [esp+30h] [ebp-1B0h]
  _DWORD v31[3]; // [esp+34h] [ebp-1ACh] BYREF
  _DWORD v32[6]; // [esp+40h] [ebp-1A0h] BYREF
  char v33; // [esp+58h] [ebp-188h]
  _DWORD v34[3]; // [esp+5Ch] [ebp-184h] BYREF
  _DWORD *v35; // [esp+68h] [ebp-178h]
  int v36; // [esp+6Ch] [ebp-174h]
  int v37; // [esp+70h] [ebp-170h]
  int v38; // [esp+74h] [ebp-16Ch]
  int v39; // [esp+78h] [ebp-168h]
  _DWORD v40[16]; // [esp+7Ch] [ebp-164h] BYREF
  _BYTE v41[292]; // [esp+BCh] [ebp-124h] BYREF

  v4 = *a2;
  v28 = 0;
  v29 = 0;
  v30 = 0;
  v5 = a1;
  v21 = 0;
  v22 = 0;
  v23 = 0;
  v24 = 0;
  v25 = 0;
  v26 = 0;
  v27 = 0;
  v6 = *a1;
  v22 = v4;
  v21 = v6;
  v23 = 0;
  v24 = 0;
  v25 = a3;
  v26 = 0;
  v27 = 0;
  LOBYTE(v28) = 1;
  *(_WORD *)((char *)&v29 + 1) = 257;
  HIBYTE(v29) = 1;
  LOBYTE(v30) = 1;
  BYTE2(v30) = 1;
  sub_1002B890(v41);
  if ( !(unsigned __int8)sub_1002CF30(&v21) )
    goto LABEL_2;
  v8 = 0;
  if ( *a2 )
  {
    v9 = (int *)(a4 + 8);
    do
    {
      v10 = *(v9 - 1);
      v11 = *v9;
      v31[0] = *(v9 - 2);
      v31[1] = v10;
      v32[3] = v31;
      v31[2] = v11;
      v32[0] = v8;
      v32[1] = -1;
      v32[2] = 1;
      v32[4] = 0;
      v32[5] = 0;
      v33 = 0;
      sub_1002BBE0(v32);
      ++v8;
      v9 += 3;
    }
    while ( v8 < *a2 );
    v5 = a1;
  }
  memset(v34, 0, sizeof(v34));
  v35 = 0;
  v36 = 0;
  v37 = 0;
  v38 = 0;
  v39 = 0;
  memset(v40, 0, sizeof(v40));
  if ( (unsigned __int8)sub_1002DB30(v34) )
  {
    v12 = v34[0];
    *v5 = v40[3];
    *a2 = v12;
    v13 = 0;
    if ( *v5 )
    {
      v14 = v40[7];
      v15 = a3 + 8;
      do
      {
        v16 = (float *)(v14 + 12 * *(_DWORD *)(v40[4] + 4 * v13));
        *(float *)(v15 - 8) = *v16;
        ++v13;
        v15 += 12;
        *(float *)(v15 - 16) = v16[1];
        *(float *)(v15 - 12) = v16[2];
      }
      while ( v13 < *v5 );
    }
    v17 = 0;
    if ( *a2 )
    {
      v18 = v35;
      v19 = (_DWORD *)(a4 + 4);
      v20 = (char *)v35 - a4;
      do
      {
        *(v19 - 1) = *v18;
        *v19 = *(_DWORD *)((char *)v19 + (_DWORD)v20);
        v19[1] = v18[2];
        ++v17;
        v18 += 3;
        v19 += 3;
      }
      while ( v17 < *a2 );
    }
    sub_1002CEB0(v41);
    return 1;
  }
  else
  {
LABEL_2:
    sub_1002CEB0(v41);
    return 0;
  }
}
