/*
 * func-name: sub_10002C70
 * func-address: 0x10002c70
 * callers: 0x10002dc0
 * callees: 0x10002710, 0x10002af0
 */

int __thiscall sub_10002C70(_DWORD *this, float *a2, int a3, char a4)
{
  int *v5; // esi
  int v6; // ebp
  int v7; // eax
  int v8; // ecx
  int result; // eax
  float v10; // [esp+10h] [ebp-90h] BYREF
  float v11; // [esp+14h] [ebp-8Ch]
  float v12; // [esp+18h] [ebp-88h]
  float v13; // [esp+1Ch] [ebp-84h]
  float v14; // [esp+20h] [ebp-80h]
  float v15; // [esp+24h] [ebp-7Ch]
  float v16; // [esp+28h] [ebp-78h]
  float v17; // [esp+2Ch] [ebp-74h]
  float v18; // [esp+30h] [ebp-70h]
  float v19; // [esp+34h] [ebp-6Ch]
  float v20; // [esp+38h] [ebp-68h]
  float v21; // [esp+3Ch] [ebp-64h]
  float v22[24]; // [esp+40h] [ebp-60h] BYREF

  sub_10002710(v22, a2);
  v5 = (int *)&unk_10021118;
  v6 = 12;
  do
  {
    v7 = *v5;
    v8 = v5[1];
    v5 += 2;
    result = sub_10002AF0(this, &v22[3 * v7], &v22[3 * v8], a3);
    --v6;
  }
  while ( v6 );
  if ( a4 )
  {
    v19 = a2[6];
    v20 = a2[9];
    v21 = a2[12];
    v16 = a2[7];
    v17 = a2[10];
    v18 = a2[13];
    v13 = a2[8];
    v14 = a2[11];
    v15 = a2[14];
    v10 = *a2 + v19;
    v11 = a2[1] + v20;
    v12 = a2[2] + v21;
    sub_10002AF0(this, a2, &v10, 16711680);
    v10 = *a2 + v16;
    v11 = a2[1] + v17;
    v12 = a2[2] + v18;
    sub_10002AF0(this, a2, &v10, 65280);
    v10 = *a2 + v13;
    v11 = a2[1] + v14;
    v12 = a2[2] + v15;
    return sub_10002AF0(this, a2, &v10, 255);
  }
  return result;
}
