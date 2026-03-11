/*
 * func-name: sub_10032790
 * func-address: 0x10032790
 * callers: 0x10032790, 0x10032ca0
 * callees: 0x10031e40, 0x10031e90, 0x10031f50, 0x10032530, 0x10032790
 */

void __cdecl sub_10032790(float *a1, float *a2, int a3)
{
  float *v3; // ebx
  float *v4; // edi
  int v5; // eax
  float *v7; // ebp
  float *v8; // [esp+10h] [ebp-8h] BYREF
  float *v9; // [esp+14h] [ebp-4h]

  v3 = a1;
  v4 = a2;
  v5 = ((char *)a2 - (char *)a1) >> 3;
  if ( v5 <= 32 )
  {
LABEL_7:
    if ( v5 > 1 )
      sub_10031E90((int)v3, (int)v4);
  }
  else
  {
    while ( a3 > 0 )
    {
      sub_10031F50(&v8, v3, (unsigned int)v4);
      v7 = v9;
      a3 = a3 / 2 / 2 + a3 / 2;
      if ( (int)(((char *)v8 - (char *)v3) & 0xFFFFFFF8) >= (int)(((char *)v4 - (char *)v9) & 0xFFFFFFF8) )
      {
        sub_10032790(v9, v4, a3);
        v4 = v8;
      }
      else
      {
        sub_10032790(v3, v8, a3);
        v3 = v7;
      }
      v5 = ((char *)v4 - (char *)v3) >> 3;
      if ( v5 <= 32 )
        goto LABEL_7;
    }
    if ( (int)(((char *)v4 - (char *)v3) & 0xFFFFFFF8) > 8 )
      sub_10031E40((int)v3, (int)v4);
    sub_10032530(v3, (int)v4);
  }
}
