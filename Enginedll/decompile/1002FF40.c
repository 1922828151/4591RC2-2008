/*
 * func-name: ?SetLOD@ModelFrame@@QAEXPAVMesh@@H@Z
 * func-address: 0x1002ff40
 * callers: 0x1009f940, 0x1011ed60, 0x1011ef20, 0x101658e0
 * callees: 0x1002c930
 */

void __thiscall ModelFrame::SetLOD(ModelFrame *this, struct Mesh *a2, unsigned int a3)
{
  int v4; // ecx
  int v5; // ecx
  unsigned int v6; // eax
  int v7; // eax

  v4 = *((_DWORD *)this + 1);
  if ( !v4 || a3 >= (*((_DWORD *)this + 2) - v4) >> 2 )
    sub_1002C930(this, a3 + 1, 0);
  v5 = *((_DWORD *)this + 1);
  if ( v5 )
    v6 = (*((_DWORD *)this + 2) - v5) >> 2;
  else
    v6 = 0;
  if ( v6 > *((_DWORD *)this + 10) )
  {
    if ( v5 )
      v7 = (*((_DWORD *)this + 2) - v5) >> 2;
    else
      v7 = 0;
    *((_DWORD *)this + 10) = v7;
  }
  if ( v5 && a3 < (*((_DWORD *)this + 2) - v5) >> 2 )
  {
    *(_DWORD *)(v5 + 4 * a3) = a2;
  }
  else
  {
    invalid_parameter_noinfo();
    *(_DWORD *)(*((_DWORD *)this + 1) + 4 * a3) = a2;
  }
}
