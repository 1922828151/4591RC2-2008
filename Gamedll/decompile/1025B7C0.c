/*
 * func-name: sub_1025B7C0
 * func-address: 0x1025b7c0
 * callers: 0x10018c87
 * callees: 0x102c9fe0
 */

int __thiscall sub_1025B7C0(int this, float a2)
{
  int result; // eax
  int v4; // edi
  double v5; // st7
  int *v6; // ecx
  int *v8; // ecx
  int v9; // eax
  int v10; // eax

  result = *(_DWORD *)(this + 3976);
  v4 = *(_DWORD *)(this + 3972);
  if ( v4 != result )
  {
    v5 = *(float *)(this + 3980) * a2;
    if ( v4 > result )
    {
      result = (int)v5;
      if ( !(int)v5 )
        result = 1;
      while ( 1 )
      {
        if ( !result )
          return result;
        *(_DWORD *)(this + 4 * *(_DWORD *)(this + 3972) + 3904) -= result;
        v6 = (int *)(this + 4 * *(_DWORD *)(this + 3972) + 3904);
        if ( *v6 >= 0 )
          goto LABEL_9;
        result = -*v6;
        *v6 = 0;
        if ( --*(_DWORD *)(this + 3972) < 0 )
          break;
LABEL_10:
        if ( *(_DWORD *)(this + 3972) < *(_DWORD *)(this + 3976) )
          return result;
      }
      *(_DWORD *)(this + 3972) = 0;
LABEL_9:
      result = 0;
      goto LABEL_10;
    }
    result = (int)v5;
    if ( !(int)v5 )
      result = 1;
    while ( 1 )
    {
      if ( !result )
        return result;
      *(_DWORD *)(this + 4 * *(_DWORD *)(this + 3972) + 3904) += result;
      v8 = (int *)(this + 4 * *(_DWORD *)(this + 3972) + 3904);
      if ( *v8 <= 255 )
        goto LABEL_18;
      v9 = *v8;
      *v8 = 255;
      ++*(_DWORD *)(this + 3972);
      result = v9 - 255;
      if ( *(int *)(this + 3972) > 15 )
        break;
LABEL_19:
      if ( *(_DWORD *)(this + 3972) > *(_DWORD *)(this + 3976) )
        return result;
    }
    *(_DWORD *)(this + 3972) = 15;
LABEL_18:
    result = 0;
    goto LABEL_19;
  }
  if ( *(_DWORD *)(this + 4 * v4 + 3904) != 255 )
  {
    v10 = (int)(*(float *)(this + 3980) * a2);
    if ( !v10 )
      v10 = 1;
    *(_DWORD *)(this + 4 * v4 + 3904) += v10;
    result = this + 4 * *(_DWORD *)(this + 3972) + 3904;
    if ( *(int *)result > 255 )
      *(_DWORD *)result = 255;
  }
  return result;
}
