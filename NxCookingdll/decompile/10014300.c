/*
 * func-name: sub_10014300
 * func-address: 0x10014300
 * callers: none
 * callees: 0x10001160
 */

float *__thiscall sub_10014300(_DWORD *this, float *a2, unsigned int a3)
{
  int v4; // ecx
  double v5; // st7
  float *v6; // ecx
  float *result; // eax

  if ( a3 >= this[47]
    && !byte_1005B1BA
    && (!dword_100580A4
     || sub_10001160(
          (_DWORD *)dword_100580A4,
          107,
          (int)"g:\\scm\\release\\PhysX_2.8.0\\novodex\\SDKs\\Core\\Common\\src\\TriangleMesh.cpp",
          520,
          &byte_1005B1BA,
          "pageIndex<pageCount",
          0)) )
  {
    __debugbreak();
  }
  v4 = this[48];
  v5 = *(float *)(v4 + 24 * a3);
  v6 = (float *)(v4 + 24 * a3);
  result = a2;
  *a2 = v5;
  a2[1] = v6[1];
  a2[2] = v6[2];
  a2[3] = v6[3];
  a2[4] = v6[4];
  a2[5] = v6[5];
  return result;
}
