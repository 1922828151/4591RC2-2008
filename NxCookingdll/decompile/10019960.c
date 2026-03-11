/*
 * func-name: sub_10019960
 * func-address: 0x10019960
 * callers: none
 * callees: 0x10015220, 0x100160a0, 0x10016120, 0x10034ca4
 */

char __thiscall sub_10019960(int this, char a2, int *a3)
{
  unsigned int v4; // ebp
  int *v5; // eax
  char v6; // cl
  char v7; // dl
  char v8; // cl
  char v9; // dl
  char v10; // cl
  char v11; // dl
  char v12; // cl
  char v13; // dl
  char v14; // cl
  char v15; // dl
  char v16; // cl
  char v17; // al
  int v19; // [esp+1Ch] [ebp-20h]
  int v20; // [esp+20h] [ebp-1Ch] BYREF
  int v21; // [esp+24h] [ebp-18h]
  int v22; // [esp+28h] [ebp-14h]
  int v23; // [esp+2Ch] [ebp-10h]
  int v24; // [esp+30h] [ebp-Ch]
  int v25; // [esp+34h] [ebp-8h]

  sub_100160A0(*(_DWORD *)(this + 4), a2, a3);
  v4 = 0;
  if ( *(_DWORD *)(this + 4) )
  {
    v19 = 0;
    do
    {
      v5 = (int *)(v19 + *(_DWORD *)(this + 8));
      v20 = *v5;
      v21 = v5[1];
      v22 = v5[2];
      v23 = v5[3];
      v24 = v5[4];
      v25 = v5[5];
      if ( a2 )
      {
        v6 = BYTE1(v20);
        v7 = HIBYTE(v20);
        BYTE1(v20) = v20;
        HIBYTE(v20) = BYTE2(v20);
        LOBYTE(v20) = v6;
        v8 = BYTE1(v21);
        BYTE1(v21) = v21;
        BYTE2(v20) = v7;
        v9 = HIBYTE(v21);
        HIBYTE(v21) = BYTE2(v21);
        LOBYTE(v21) = v8;
        v10 = BYTE1(v22);
        BYTE1(v22) = v22;
        BYTE2(v21) = v9;
        v11 = HIBYTE(v22);
        HIBYTE(v22) = BYTE2(v22);
        LOBYTE(v22) = v10;
        v12 = HIBYTE(v23);
        HIBYTE(v23) = v23;
        BYTE2(v22) = v11;
        v13 = BYTE2(v23);
        BYTE2(v23) = BYTE1(v23);
        LOBYTE(v23) = v12;
        v14 = HIBYTE(v24);
        BYTE1(v23) = v13;
        v15 = BYTE2(v24);
        BYTE2(v24) = BYTE1(v24);
        HIBYTE(v24) = v24;
        LOBYTE(v24) = v14;
        v16 = HIBYTE(v25);
        BYTE1(v24) = v15;
        v17 = BYTE1(v25);
        HIBYTE(v25) = v25;
        LOBYTE(v25) = v16;
        BYTE1(v25) = BYTE2(v25);
        BYTE2(v25) = v17;
      }
      sub_10015220(a3, (char *)&v20, 24);
      v19 += 24;
      ++v4;
    }
    while ( v4 < *(_DWORD *)(this + 4) );
  }
  sub_10016120(*(float *)(this + 12), a2, a3);
  sub_10016120(*(float *)(this + 16), a2, a3);
  sub_10016120(*(float *)(this + 20), a2, a3);
  sub_10016120(*(float *)(this + 24), a2, a3);
  sub_10016120(*(float *)(this + 28), a2, a3);
  sub_10016120(*(float *)(this + 32), a2, a3);
  return 1;
}
