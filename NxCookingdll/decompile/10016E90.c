/*
 * func-name: sub_10016E90
 * func-address: 0x10016e90
 * callers: 0x10016e90, 0x100171d0
 * callees: 0x100169d0, 0x10016e90
 */

char __thiscall sub_10016E90(float *this, _DWORD *a2)
{
  int v3; // ecx
  double v4; // st7
  float v5; // edx
  bool v6; // c0
  bool v7; // c3
  float v8; // eax
  float v9; // edx
  float v10; // edx
  float v11; // eax
  float v12; // ecx
  float v13; // edx
  float v14; // eax
  double v15; // st7
  float v16; // edx
  float v17; // eax
  float v18; // ecx
  float v19; // edx
  float v20; // eax
  float v21; // edx
  double v22; // st6
  double v23; // st6
  double v24; // st6
  char result; // al
  unsigned int v26; // ecx
  unsigned int v27; // ebx
  float v28; // [esp+Ch] [ebp-18h]
  float v29; // [esp+10h] [ebp-14h]
  float v30; // [esp+14h] [ebp-10h]
  float v31; // [esp+18h] [ebp-Ch]
  float v32; // [esp+1Ch] [ebp-8h]
  float v33; // [esp+20h] [ebp-4h]

  ++dword_1005B1C0;
  (*(void (__thiscall **)(_DWORD *, _DWORD, _DWORD, float *))(*a2 + 4))(
    a2,
    *((_DWORD *)this + 8),
    *((_DWORD *)this + 9),
    this);
  v3 = a2[4];
  if ( v3 != -1 )
  {
    if ( *((_BYTE *)a2 + 56) )
    {
      a2[8] = *(_DWORD *)this;
      a2[9] = *((_DWORD *)this + 1);
      a2[10] = *((_DWORD *)this + 2);
      a2[11] = *((_DWORD *)this + 3);
      a2[12] = *((_DWORD *)this + 4);
      a2[13] = *((_DWORD *)this + 5);
      *((_BYTE *)a2 + 56) = 0;
    }
    v4 = *(float *)&a2[v3 + 8];
    v5 = *this;
    v6 = v4 < *((float *)a2 + 3);
    v7 = v4 == *((float *)a2 + 3);
    v32 = this[1];
    v28 = this[3];
    v8 = this[5];
    v31 = v5;
    v9 = this[2];
    v30 = v8;
    v33 = v9;
    v29 = this[4];
    if ( v6 || v7 )
    {
      if ( *(float *)&a2[v3 + 11] >= (double)*((float *)a2 + 3) )
        goto LABEL_9;
      *(&v28 + v3) = *((float *)a2 + 3);
    }
    else
    {
      *(&v31 + v3) = *((float *)a2 + 3);
    }
    v10 = v32;
    v11 = v33;
    *this = v31;
    v12 = v28;
    this[1] = v10;
    v13 = v29;
    this[2] = v11;
    v14 = v30;
    this[3] = v12;
    this[4] = v13;
    this[5] = v14;
  }
LABEL_9:
  if ( a2[5] )
  {
    v15 = *((float *)a2 + 5);
    v16 = this[1];
    v17 = this[2];
    v28 = *this;
    v18 = this[3];
    v29 = v16;
    v19 = this[4];
    v28 = v28 - v15;
    v30 = v17;
    v20 = this[5];
    v31 = v18;
    v32 = v19;
    v29 = v29 - v15;
    v21 = v29;
    v33 = v20;
    v22 = v30 - v15;
    *this = v28;
    this[1] = v21;
    v30 = v22;
    v23 = v31;
    this[2] = v30;
    v31 = v23 + v15;
    v24 = v32;
    this[3] = v31;
    v32 = v24 + v15;
    this[4] = v32;
    v33 = v15 + v33;
    this[5] = v33;
  }
  result = sub_100169D0((int)this, a2);
  v26 = (_DWORD)this[6] & 0xFFFFFFFE;
  if ( v26 )
    v27 = v26 + 40;
  else
    v27 = 0;
  if ( v26 )
    *(_DWORD *)(v26 + 28) = this;
  if ( v27 )
    *(_DWORD *)(v27 + 28) = this;
  if ( v26 )
    result = sub_10016E90(a2);
  if ( v27 )
    result = sub_10016E90(a2);
  a2[15] += *((_DWORD *)this + 9);
  return result;
}
