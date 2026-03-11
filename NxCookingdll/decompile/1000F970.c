/*
 * func-name: sub_1000F970
 * func-address: 0x1000f970
 * callers: 0x10013840, 0x1002e590, 0x1002f4a0
 * callees: 0x10001160
 */

int __thiscall sub_1000F970(_DWORD *this, int a2)
{
  bool v3; // zf
  int result; // eax

  v3 = this[3] == 0;
  this[1] = a2;
  if ( !v3
    && !byte_1005B131
    && (!dword_100580A4
     || sub_10001160(
          (_DWORD *)dword_100580A4,
          107,
          (int)"g:\\scm\\release\\PhysX_2.8.0\\novodex\\SDKs\\Core\\Common\\src\\InternalTriangleMesh.cpp",
          192,
          &byte_1005B131,
          "!mData.mTriangles",
          0)) )
  {
    __debugbreak();
  }
  result = (*(int (__stdcall **)(int, int))(*(_DWORD *)dword_100580A0 + 8))(12 * this[1], 269);
  this[3] = result;
  return result;
}
