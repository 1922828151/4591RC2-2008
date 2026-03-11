/*
 * func-name: sub_1000F9E0
 * func-address: 0x1000f9e0
 * callers: 0x10013840, 0x1002f4a0
 * callees: 0x10001160
 */

int __thiscall sub_1000F9E0(_DWORD *this)
{
  int result; // eax

  if ( !this[1] )
    return 0;
  if ( this[19]
    && !byte_1005B132
    && (!dword_100580A4
     || sub_10001160(
          (_DWORD *)dword_100580A4,
          107,
          (int)"g:\\scm\\release\\PhysX_2.8.0\\novodex\\SDKs\\Core\\Common\\src\\InternalTriangleMesh.cpp",
          202,
          &byte_1005B132,
          "!materialIndices",
          0)) )
  {
    __debugbreak();
  }
  result = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_100580A0 + 8))(dword_100580A0, 2 * this[1], 270);
  this[19] = result;
  return result;
}
