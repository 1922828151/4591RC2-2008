/*
 * func-name: sub_1000FA50
 * func-address: 0x1000fa50
 * callers: 0x10013840
 * callees: 0x10001160
 */

int __thiscall sub_1000FA50(_DWORD *this)
{
  int result; // eax

  if ( !this[1] )
    return 0;
  if ( this[20]
    && !byte_1005B133
    && (!dword_100580A4
     || sub_10001160(
          (_DWORD *)dword_100580A4,
          107,
          (int)"g:\\scm\\release\\PhysX_2.8.0\\novodex\\SDKs\\Core\\Common\\src\\InternalTriangleMesh.cpp",
          212,
          &byte_1005B133,
          "!faceRemap",
          0)) )
  {
    __debugbreak();
  }
  result = (*(int (__stdcall **)(int, int))(*(_DWORD *)dword_100580A0 + 8))(4 * this[1], 271);
  this[20] = result;
  return result;
}
