/*
 * func-name: sub_10033E60
 * func-address: 0x10033e60
 * callers: 0x10034200
 * callees: none
 */

int __thiscall sub_10033E60(float *this, unsigned __int16 *a2, _WORD *a3)
{
  double v3; // st6
  double v4; // st7
  int v5; // eax
  __int16 v6; // si
  unsigned __int16 v7; // dx
  unsigned __int16 v8; // ax
  int v10; // eax
  __int16 v11; // si
  int v12; // eax
  __int16 v13; // si
  unsigned __int16 v14; // dx
  unsigned __int16 v15; // ax
  int v16; // eax
  __int16 v17; // si
  int v18; // eax
  __int16 v19; // si
  unsigned __int16 v20; // dx
  unsigned __int16 v21; // ax
  int result; // eax
  __int16 v23; // dx
  unsigned __int16 v24; // cx
  float v25; // [esp+Ch] [ebp-4h]
  float v26; // [esp+14h] [ebp+4h]
  float v27; // [esp+14h] [ebp+4h]
  float v28; // [esp+14h] [ebp+4h]
  float v29; // [esp+14h] [ebp+4h]
  float v30; // [esp+14h] [ebp+4h]

  v3 = (this[4] + this[1]) * 0.5;
  v4 = (this[5] + this[2]) * 0.5;
  v25 = (*this + this[3]) * 0.5;
  v5 = HIWORD(LODWORD(v25));
  v6 = HIWORD(v25) & 0x8000;
  v7 = HIWORD(v25) & 0x7FFF;
  if ( (HIWORD(v25) & 0x7FFF) != 0 )
  {
    if ( v6 )
    {
      if ( v7 < 0x7F7Fu )
        LOWORD(v5) = HIWORD(v25) + 1;
      v8 = v6 | v5;
    }
    else
    {
      v8 = v7 - 1;
    }
  }
  else
  {
    v8 = -32767;
  }
  *a2 = v8;
  v26 = this[3] - COERCE_FLOAT(v8 << 16);
  v10 = HIWORD(LODWORD(v26));
  v11 = HIWORD(v26) & 0x8000;
  if ( (HIWORD(v26) & 0x7FFF) != 0 )
  {
    if ( v11 )
    {
      LOWORD(v10) = v11 | ((HIWORD(v26) & 0x7FFF) - 1);
    }
    else if ( HIWORD(v26) < 0x7F7Fu )
    {
      LOWORD(v10) = HIWORD(v26) + 1;
    }
  }
  else
  {
    LOWORD(v10) = 1;
  }
  v27 = v3;
  *a3 = v10;
  v12 = HIWORD(LODWORD(v27));
  v13 = HIWORD(v27) & 0x8000;
  v14 = HIWORD(v27) & 0x7FFF;
  if ( (HIWORD(v27) & 0x7FFF) != 0 )
  {
    if ( v13 )
    {
      if ( v14 < 0x7F7Fu )
        LOWORD(v12) = HIWORD(v27) + 1;
      v15 = v13 | v12;
    }
    else
    {
      v15 = v14 - 1;
    }
  }
  else
  {
    v15 = -32767;
  }
  a2[1] = v15;
  v28 = this[4] - COERCE_FLOAT(v15 << 16);
  v16 = HIWORD(LODWORD(v28));
  v17 = HIWORD(v28) & 0x8000;
  if ( (HIWORD(v28) & 0x7FFF) != 0 )
  {
    if ( v17 )
    {
      LOWORD(v16) = v17 | ((HIWORD(v28) & 0x7FFF) - 1);
    }
    else if ( HIWORD(v28) < 0x7F7Fu )
    {
      LOWORD(v16) = HIWORD(v28) + 1;
    }
  }
  else
  {
    LOWORD(v16) = 1;
  }
  v29 = v4;
  a3[1] = v16;
  v18 = HIWORD(LODWORD(v29));
  v19 = HIWORD(v29) & 0x8000;
  v20 = HIWORD(v29) & 0x7FFF;
  if ( (HIWORD(v29) & 0x7FFF) != 0 )
  {
    if ( v19 )
    {
      if ( v20 < 0x7F7Fu )
        LOWORD(v18) = HIWORD(v29) + 1;
      v21 = v19 | v18;
    }
    else
    {
      v21 = v20 - 1;
    }
  }
  else
  {
    v21 = -32767;
  }
  a2[2] = v21;
  v30 = this[5] - COERCE_FLOAT(v21 << 16);
  result = HIWORD(LODWORD(v30));
  v23 = HIWORD(v30) & 0x8000;
  if ( (HIWORD(v30) & 0x7FFF) != 0 )
  {
    if ( v23 )
    {
      v24 = v23 | ((HIWORD(v30) & 0x7FFF) - 1);
      result = v24;
      a3[2] = v24;
    }
    else
    {
      if ( HIWORD(v30) < 0x7F7Fu )
        LOWORD(result) = HIWORD(v30) + 1;
      result = (unsigned __int16)result;
      a3[2] = result;
    }
  }
  else
  {
    result = 1;
    a3[2] = 1;
  }
  return result;
}
