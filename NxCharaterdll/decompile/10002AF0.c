/*
 * func-name: sub_10002AF0
 * func-address: 0x10002af0
 * callers: 0x10002c70
 * callees: none
 */

int __thiscall sub_10002AF0(_DWORD *this, float *a2, float *a3, int a4)
{
  unsigned int v5; // edi
  unsigned int v6; // eax
  int v7; // ecx
  unsigned int v8; // ebx
  unsigned int v9; // eax
  int v10; // edi
  int v11; // eax
  float *v12; // edx
  int v13; // ebx
  int v14; // eax
  float *v15; // ecx
  double v16; // st7
  double v17; // st7
  int v18; // edx
  int result; // eax
  float v20; // [esp+Ch] [ebp-1Ch]
  float v21; // [esp+10h] [ebp-18h]
  float v22; // [esp+14h] [ebp-14h]
  float v23; // [esp+18h] [ebp-10h]
  float v24; // [esp+1Ch] [ebp-Ch]
  float v25; // [esp+20h] [ebp-8h]
  float *v26; // [esp+2Ch] [ebp+4h]

  v20 = *a2;
  v5 = this[6];
  v21 = a2[1];
  v22 = a2[2];
  v23 = *a3;
  v24 = a3[1];
  v6 = this[5];
  v25 = a3[2];
  if ( v5 <= v6 )
  {
    v7 = this[4];
    v8 = 2 * ((int)(v6 - v7) / 28) + 2;
    v9 = v7 ? (int)(v5 - v7) / 28 : 0;
    if ( v9 < v8 )
    {
      v10 = 28 * v8;
      v11 = (*(int (__thiscall **)(int, unsigned int, int))(*(_DWORD *)dword_1002F7BC + 8))(
              dword_1002F7BC,
              28 * v8,
              289);
      v12 = (float *)this[4];
      v13 = v11;
      v26 = (float *)this[5];
      if ( v12 != v26 )
      {
        v14 = v11 + 20;
        v15 = v12 + 5;
        do
        {
          v16 = *v12;
          v12 += 7;
          *(float *)(v14 - 20) = v16;
          v14 += 28;
          v17 = *(v15 - 4);
          v15 += 7;
          *(float *)(v14 - 44) = v17;
          *(float *)(v14 - 40) = *(v15 - 10);
          *(float *)(v14 - 36) = *(v15 - 9);
          *(float *)(v14 - 32) = *(v15 - 8);
          *(float *)(v14 - 28) = *(v15 - 7);
          *(float *)(v14 - 24) = *(v15 - 6);
        }
        while ( v12 != v26 );
      }
      if ( this[4] )
        (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_1002F7BC + 20))(dword_1002F7BC, this[4]);
      v18 = v13 + 28 * ((this[5] - this[4]) / 28);
      this[6] = v13 + v10;
      this[5] = v18;
      this[4] = v13;
    }
  }
  result = this[5];
  *(float *)result = v20;
  *(float *)(result + 4) = v21;
  *(float *)(result + 8) = v22;
  *(float *)(result + 12) = v23;
  *(float *)(result + 16) = v24;
  *(float *)(result + 20) = v25;
  *(_DWORD *)(result + 24) = a4;
  this[5] += 28;
  return result;
}
