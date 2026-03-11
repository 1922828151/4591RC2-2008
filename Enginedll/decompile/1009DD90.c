/*
 * func-name: ?GetMesh@ModelFrame@@QAEPAVMesh@@H@Z
 * func-address: 0x1009dd90
 * callers: 0x100042c0, 0x10005d50, 0x10014730, 0x10034690, 0x10034920, 0x100384a0, 0x100431a0, 0x10044cf0, 0x1007c180, 0x1007c450, 0x1007d280, 0x1007da10, 0x1007da70, 0x10082810, 0x10082b00, 0x10085e90, 0x10086a00, 0x1008ce00, 0x1008e470, 0x100e1e90, 0x100ee360, 0x100ee9d0, 0x100efe90, 0x100f04f0, 0x100f0c50, 0x100f1180, 0x101280a0, 0x10137a00, 0x10143e00, 0x101484b0, 0x1015d190, 0x1015d320, 0x1015e8d0, 0x1015e9b0, 0x1015edf0, 0x1015fb30, 0x10160e00, 0x10162160, 0x101658e0, 0x10168a40
 * callees: none
 */

struct Mesh *__thiscall ModelFrame::GetMesh(ModelFrame *this, unsigned int a2)
{
  int v3; // ecx

  v3 = *((_DWORD *)this + 1);
  if ( v3 && a2 < (*((_DWORD *)this + 2) - v3) >> 2 )
    return *(struct Mesh **)(*((_DWORD *)this + 1) + 4 * a2);
  else
    return 0;
}
