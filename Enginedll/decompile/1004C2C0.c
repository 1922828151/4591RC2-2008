/*
 * func-name: sub_1004C2C0
 * func-address: 0x1004c2c0
 * callers: 0x1004c6f0, 0x1005b6b0, 0x1007aa60, 0x1008fdf0, 0x10102e10, 0x101032a0, 0x10103d60, 0x10103ef0
 * callees: none
 */

float *__thiscall sub_1004C2C0(float *this, float *a2, int a3)
{
  float *result; // eax
  int v4; // edx
  int v5; // ecx
  int v6; // edx
  int v7; // ecx

  switch ( a3 )
  {
    case 0:
      result = a2;
      *a2 = this[4];
      v4 = *((_DWORD *)this + 5);
      v5 = *((_DWORD *)this + 6);
      *((_DWORD *)a2 + 1) = v4;
      *((_DWORD *)a2 + 2) = v5;
      break;
    case 1:
      result = a2;
      *a2 = this[7];
      v6 = *((_DWORD *)this + 8);
      v7 = *((_DWORD *)this + 9);
      *((_DWORD *)a2 + 1) = v6;
      *((_DWORD *)a2 + 2) = v7;
      break;
    case 2:
      result = a2;
      *a2 = this[7];
      a2[1] = this[5];
      a2[2] = this[6];
      break;
    case 3:
      result = a2;
      *a2 = this[4];
      a2[1] = this[8];
      a2[2] = this[9];
      break;
    case 4:
      result = a2;
      *a2 = this[7];
      a2[1] = this[8];
      a2[2] = this[6];
      break;
    case 5:
      result = a2;
      *a2 = this[4];
      a2[1] = this[5];
      a2[2] = this[9];
      break;
    case 6:
      result = a2;
      *a2 = this[4];
      a2[1] = this[8];
      a2[2] = this[6];
      break;
    case 7:
      result = a2;
      *a2 = this[7];
      a2[1] = this[5];
      a2[2] = this[9];
      break;
    default:
      result = a2;
      *a2 = 0.0;
      a2[1] = 0.0;
      a2[2] = 0.0;
      break;
  }
  return result;
}
