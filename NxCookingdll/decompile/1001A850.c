/*
 * func-name: sub_1001A850
 * func-address: 0x1001a850
 * callers: none
 * callees: 0x10015220, 0x100160a0
 */

char __thiscall sub_1001A850(int *this, char a2, int *a3)
{
  unsigned int v4; // ebp
  int v5; // edi
  int v6; // eax
  double v7; // st7
  int v8; // eax
  char v9; // cl
  char v10; // dl
  char v11; // cl
  char v12; // dl
  char v13; // cl
  char v14; // dl
  char v15; // cl
  char v16; // dl
  char v17; // cl
  char v18; // dl
  char v19; // cl
  char v20; // dl
  char v21; // cl
  char v22; // dl
  char v23; // cl
  char v24; // al
  float v26; // [esp+Ch] [ebp-20h] BYREF
  float v27; // [esp+10h] [ebp-1Ch]
  float v28; // [esp+14h] [ebp-18h]
  float v29; // [esp+18h] [ebp-14h]
  float v30; // [esp+1Ch] [ebp-10h]
  float v31; // [esp+20h] [ebp-Ch]
  int v32; // [esp+24h] [ebp-8h]
  int v33; // [esp+28h] [ebp-4h]

  sub_100160A0(this[1], a2, a3);
  v4 = 0;
  if ( this[1] )
  {
    v5 = 0;
    do
    {
      v6 = this[2];
      v7 = *(float *)(v6 + v5);
      v8 = v5 + v6;
      v26 = v7;
      v27 = *(float *)(v8 + 4);
      v28 = *(float *)(v8 + 8);
      v29 = *(float *)(v8 + 12);
      v30 = *(float *)(v8 + 16);
      v31 = *(float *)(v8 + 20);
      v32 = *(_DWORD *)(v8 + 24);
      v33 = *(_DWORD *)(v8 + 28);
      if ( a2 )
      {
        v9 = HIBYTE(v26);
        v10 = BYTE2(v26);
        BYTE2(v26) = BYTE1(v26);
        HIBYTE(v26) = LOBYTE(v26);
        LOBYTE(v26) = v9;
        v11 = HIBYTE(v27);
        HIBYTE(v27) = LOBYTE(v27);
        BYTE1(v26) = v10;
        v12 = BYTE2(v27);
        BYTE2(v27) = BYTE1(v27);
        LOBYTE(v27) = v11;
        v13 = HIBYTE(v28);
        HIBYTE(v28) = LOBYTE(v28);
        BYTE1(v27) = v12;
        v14 = BYTE2(v28);
        BYTE2(v28) = BYTE1(v28);
        LOBYTE(v28) = v13;
        v15 = HIBYTE(v29);
        HIBYTE(v29) = LOBYTE(v29);
        BYTE1(v28) = v14;
        v16 = BYTE2(v29);
        BYTE2(v29) = BYTE1(v29);
        LOBYTE(v29) = v15;
        v17 = HIBYTE(v30);
        HIBYTE(v30) = LOBYTE(v30);
        BYTE1(v29) = v16;
        v18 = BYTE2(v30);
        BYTE2(v30) = BYTE1(v30);
        LOBYTE(v30) = v17;
        v19 = HIBYTE(v31);
        HIBYTE(v31) = LOBYTE(v31);
        BYTE1(v30) = v18;
        v20 = BYTE2(v31);
        BYTE2(v31) = BYTE1(v31);
        LOBYTE(v31) = v19;
        v21 = HIBYTE(v32);
        BYTE1(v31) = v20;
        v22 = BYTE2(v32);
        BYTE2(v32) = BYTE1(v32);
        HIBYTE(v32) = v32;
        LOBYTE(v32) = v21;
        v23 = HIBYTE(v33);
        BYTE1(v32) = v22;
        v24 = BYTE1(v33);
        HIBYTE(v33) = v33;
        LOBYTE(v33) = v23;
        BYTE1(v33) = BYTE2(v33);
        BYTE2(v33) = v24;
      }
      sub_10015220(a3, (char *)&v26, 32);
      ++v4;
      v5 += 32;
    }
    while ( v4 < this[1] );
  }
  return 1;
}
