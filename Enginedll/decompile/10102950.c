/*
 * func-name: sub_10102950
 * func-address: 0x10102950
 * callers: 0x10102e10, 0x10103d60
 * callees: 0x10104960, 0x10105130, 0x101a2534
 */

int __thiscall sub_10102950(float *this, float **a2, int a3, int a4)
{
  void *v6; // eax
  float *v7; // eax
  double v8; // st7
  double v9; // st7
  double v10; // st7
  float *v11; // eax
  float v13; // [esp+18h] [ebp+4h]
  float v14; // [esp+18h] [ebp+4h]
  float v15; // [esp+18h] [ebp+4h]
  float v16; // [esp+18h] [ebp+4h]
  float v17; // [esp+18h] [ebp+4h]
  float v18; // [esp+18h] [ebp+4h]
  float v19; // [esp+18h] [ebp+4h]
  float v20; // [esp+18h] [ebp+4h]
  float v21; // [esp+18h] [ebp+4h]
  float v22; // [esp+1Ch] [ebp+8h]
  float v23; // [esp+1Ch] [ebp+8h]
  float v24; // [esp+1Ch] [ebp+8h]
  float v25; // [esp+1Ch] [ebp+8h]
  float v26; // [esp+1Ch] [ebp+8h]
  float v27; // [esp+1Ch] [ebp+8h]
  float v28; // [esp+1Ch] [ebp+8h]
  float v29; // [esp+1Ch] [ebp+8h]
  float v30; // [esp+1Ch] [ebp+8h]

  if ( !*a2 )
  {
    v6 = operator new(0x74u);
    if ( v6 )
      v7 = (float *)sub_10104960(v6);
    else
      v7 = 0;
    *a2 = v7;
    switch ( a3 )
    {
      case 0:
        v13 = this[11];
        v22 = this[12];
        v7[4] = this[4];
        v7[5] = v13;
        v7[6] = v22;
        v14 = this[8];
        v23 = this[9];
        v8 = this[10];
        goto LABEL_16;
      case 1:
        v15 = this[11];
        v24 = this[6];
        v7[4] = this[4];
        v7[5] = v15;
        v7[6] = v24;
        v14 = this[8];
        v23 = this[12];
        v8 = this[10];
        goto LABEL_16;
      case 2:
        v16 = this[11];
        v25 = this[12];
        v7[4] = this[10];
        v7[5] = v16;
        v7[6] = v25;
        v14 = this[8];
        v9 = this[9];
        goto LABEL_15;
      case 3:
        v17 = this[11];
        v26 = this[6];
        v7[4] = this[10];
        v7[5] = v17;
        v7[6] = v26;
        v10 = this[8];
        goto LABEL_14;
      case 4:
        v18 = this[5];
        v27 = this[12];
        v7[4] = this[4];
        v7[5] = v18;
        v7[6] = v27;
        v14 = this[11];
        v23 = this[9];
        v8 = this[10];
        goto LABEL_16;
      case 5:
        v19 = this[5];
        v28 = this[6];
        v7[4] = this[4];
        v7[5] = v19;
        v7[6] = v28;
        v14 = this[11];
        v23 = this[12];
        v8 = this[10];
        goto LABEL_16;
      case 6:
        v20 = this[5];
        v29 = this[12];
        v7[4] = this[10];
        v7[5] = v20;
        v7[6] = v29;
        v14 = this[11];
        v9 = this[9];
        goto LABEL_15;
      case 7:
        v21 = this[5];
        v30 = this[6];
        v7[4] = this[10];
        v7[5] = v21;
        v7[6] = v30;
        v10 = this[11];
LABEL_14:
        v14 = v10;
        v9 = this[12];
LABEL_15:
        v23 = v9;
        v8 = this[7];
LABEL_16:
        v11 = *a2;
        v11[7] = v8;
        v11 += 7;
        v11[1] = v14;
        v11[2] = v23;
        break;
      default:
        return sub_10105130((int)(*a2 + 21), (int)&a4);
    }
  }
  return sub_10105130((int)(*a2 + 21), (int)&a4);
}
