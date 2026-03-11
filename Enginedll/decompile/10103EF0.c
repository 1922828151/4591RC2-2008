/*
 * func-name: sub_10103EF0
 * func-address: 0x10103ef0
 * callers: 0x10103ef0, 0x10104580
 * callees: 0x1004c2c0, 0x10102bb0, 0x101032a0, 0x10103ef0, 0x101051a0
 */

int __thiscall sub_10103EF0(float *this, int a2, int a3)
{
  int v4; // ecx
  int v5; // eax
  _DWORD *i; // edx
  int result; // eax
  _DWORD *v8; // ebp
  int v9; // esi
  unsigned int v10; // edi
  float *v11; // eax
  int v12; // esi
  float **v13; // edi
  bool v14; // cc
  float *v15; // ecx
  int v16; // edx
  unsigned int v17; // eax
  int v18; // [esp+8h] [ebp-20h]
  float **v19; // [esp+Ch] [ebp-1Ch]
  float v20; // [esp+10h] [ebp-18h]
  float v21; // [esp+14h] [ebp-14h]
  float v22; // [esp+18h] [ebp-10h]
  float v23[3]; // [esp+1Ch] [ebp-Ch] BYREF

  v4 = *(_DWORD *)(a2 + 8);
  v5 = 0;
  if ( v4 > 0 )
  {
    for ( i = this + 13; !*i; ++i )
    {
      if ( ++v5 >= v4 )
        return sub_101051A0((int)(this + 25), (int)&a3);
    }
    v18 = 0;
    v8 = &unk_102829F0;
    v19 = (float **)(this + 13);
    while ( 1 )
    {
      v9 = 0;
      v10 = *v8 & 0x80000000;
      while ( 1 )
      {
        v11 = sub_1004C2C0((float *)(a3 + 4), v23, v9);
        v20 = *v11 - this[10];
        if ( (LODWORD(v20) & 0x80000000) == v10 )
        {
          v21 = v11[1] - this[11];
          if ( (v8[1] ^ LODWORD(v21)) >= 0 )
          {
            v22 = v11[2] - this[12];
            if ( (v8[2] ^ LODWORD(v22)) >= 0 )
              break;
          }
        }
        if ( ++v9 >= 8 )
        {
          v12 = a2;
          v13 = v19;
          goto LABEL_14;
        }
      }
      v13 = v19;
      v15 = *v19;
      if ( !*v19 )
        break;
      v16 = *((_DWORD *)v15 + 26);
      if ( v16 )
        v17 = (*((_DWORD *)v15 + 27) - v16) >> 2;
      else
        v17 = 0;
      v12 = a2;
      if ( v17 >= *(_DWORD *)(a2 + 12) - 1 )
        goto LABEL_23;
      sub_10103EF0(a2, a3);
LABEL_14:
      result = v18 + 1;
      v8 += 3;
      v14 = ++v18 < *(_DWORD *)(v12 + 8);
      v19 = v13 + 1;
      if ( !v14 )
        return result;
    }
    v12 = a2;
LABEL_23:
    sub_10102BB0(this, v19, v18, a3);
    sub_101032A0((int)*v19, v12);
    goto LABEL_14;
  }
  return sub_101051A0((int)(this + 25), (int)&a3);
}
