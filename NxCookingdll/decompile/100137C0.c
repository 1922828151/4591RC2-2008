/*
 * func-name: sub_100137C0
 * func-address: 0x100137c0
 * callers: 0x10013840, 0x1002f680
 * callees: 0x1000d700
 */

void __thiscall sub_100137C0(int this)
{
  int v2; // ecx
  int v3; // [esp+0h] [ebp-4h]

  v2 = *(_DWORD *)(this + 176);
  if ( v2 != 255 )
  {
    if ( *(float *)(this + 180) <= (double)*(float *)(this + 4 * v2 + 128) )
    {
LABEL_5:
      *(_DWORD *)(this + 172) = v2;
      return;
    }
    if ( *(float *)(this + 180) >= (double)*(float *)(this + 4 * v2 + 140) )
    {
      v2 |= 8u;
      goto LABEL_5;
    }
    sub_1000D700(
      206,
      (int)"g:\\scm\\release\\PhysX_2.8.0\\novodex\\SDKs\\Core\\Common\\src\\TriangleMesh.cpp",
      102,
      0,
      "heightFieldVerticalExtent is not outside of the vertex coordinate range of the mesh along the heightFieldVerticalA"
      "xis!  HeightField mode ignored!",
      v3);
    *(float *)(this + 180) = 0.0;
    *(_DWORD *)(this + 176) = 255;
    *(_DWORD *)(this + 172) = 255;
  }
}
