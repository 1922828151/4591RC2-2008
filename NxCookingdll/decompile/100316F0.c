/*
 * func-name: sub_100316F0
 * func-address: 0x100316f0
 * callers: 0x10033480, 0x10033910
 * callees: none
 */

int __stdcall sub_100316F0(__int16 *a1, float *a2)
{
  int v3; // eax
  __int16 v4; // dx
  unsigned __int16 v5; // cx
  __int16 v6; // ax
  int v7; // eax
  __int16 v8; // dx
  unsigned __int16 v9; // cx
  __int16 v10; // ax
  int v11; // eax
  __int16 v12; // dx
  unsigned __int16 v13; // cx
  __int16 v14; // ax
  int v15; // eax
  __int16 v16; // dx
  int v17; // eax
  __int16 v18; // dx
  int result; // eax
  __int16 v20; // dx
  unsigned __int16 v21; // cx
  float v22; // [esp+10h] [ebp+8h]
  float v23; // [esp+10h] [ebp+8h]
  float v24; // [esp+10h] [ebp+8h]
  float v25; // [esp+10h] [ebp+8h]
  float v26; // [esp+10h] [ebp+8h]
  float v27; // [esp+10h] [ebp+8h]

  v22 = *a2;
  v3 = HIWORD(LODWORD(v22));
  v4 = HIWORD(v22) & 0x8000;
  v5 = HIWORD(v22) & 0x7FFF;
  if ( (HIWORD(v22) & 0x7FFF) != 0 )
  {
    if ( v4 )
    {
      if ( v5 < 0x7F7Fu )
        LOWORD(v3) = HIWORD(v22) + 1;
      v6 = v4 | v3;
    }
    else
    {
      v6 = v5 - 1;
    }
  }
  else
  {
    v6 = -32767;
  }
  *a1 = v6;
  v23 = a2[1];
  v7 = HIWORD(LODWORD(v23));
  v8 = HIWORD(v23) & 0x8000;
  v9 = HIWORD(v23) & 0x7FFF;
  if ( (HIWORD(v23) & 0x7FFF) != 0 )
  {
    if ( v8 )
    {
      if ( v9 < 0x7F7Fu )
        LOWORD(v7) = HIWORD(v23) + 1;
      v10 = v8 | v7;
    }
    else
    {
      v10 = v9 - 1;
    }
  }
  else
  {
    v10 = -32767;
  }
  a1[1] = v10;
  v24 = a2[2];
  v11 = HIWORD(LODWORD(v24));
  v12 = HIWORD(v24) & 0x8000;
  v13 = HIWORD(v24) & 0x7FFF;
  if ( (HIWORD(v24) & 0x7FFF) != 0 )
  {
    if ( v12 )
    {
      if ( v13 < 0x7F7Fu )
        LOWORD(v11) = HIWORD(v24) + 1;
      v14 = v12 | v11;
    }
    else
    {
      v14 = v13 - 1;
    }
  }
  else
  {
    v14 = -32767;
  }
  a1[2] = v14;
  v25 = a2[3];
  v15 = HIWORD(LODWORD(v25));
  v16 = HIWORD(v25) & 0x8000;
  if ( (HIWORD(v25) & 0x7FFF) != 0 )
  {
    if ( v16 )
    {
      LOWORD(v15) = v16 | ((HIWORD(v25) & 0x7FFF) - 1);
    }
    else if ( HIWORD(v25) < 0x7F7Fu )
    {
      LOWORD(v15) = HIWORD(v25) + 1;
    }
  }
  else
  {
    LOWORD(v15) = 1;
  }
  a1[3] = v15;
  v26 = a2[4];
  v17 = HIWORD(LODWORD(v26));
  v18 = HIWORD(v26) & 0x8000;
  if ( (HIWORD(v26) & 0x7FFF) != 0 )
  {
    if ( v18 )
    {
      LOWORD(v17) = v18 | ((HIWORD(v26) & 0x7FFF) - 1);
    }
    else if ( HIWORD(v26) < 0x7F7Fu )
    {
      LOWORD(v17) = HIWORD(v26) + 1;
    }
  }
  else
  {
    LOWORD(v17) = 1;
  }
  a1[4] = v17;
  v27 = a2[5];
  result = HIWORD(LODWORD(v27));
  v20 = HIWORD(v27) & 0x8000;
  if ( (HIWORD(v27) & 0x7FFF) != 0 )
  {
    if ( v20 )
    {
      v21 = v20 | ((HIWORD(v27) & 0x7FFF) - 1);
      result = v21;
      a1[5] = v21;
    }
    else
    {
      if ( HIWORD(v27) < 0x7F7Fu )
        LOWORD(result) = HIWORD(v27) + 1;
      result = (unsigned __int16)result;
      a1[5] = result;
    }
  }
  else
  {
    result = 1;
    a1[5] = 1;
  }
  return result;
}
