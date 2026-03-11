/*
 * func-name: ?AddPostProcessEffect@PostProcess@@QAEPAVPostProcessEffect@@PAV2@_NH@Z
 * func-address: 0x10108110
 * callers: 0x10108190, 0x101083b0
 * callees: 0x10109480, 0x101097a0
 */

struct PostProcessEffect *__thiscall PostProcess::AddPostProcessEffect(
        PostProcess *this,
        struct PostProcessEffect *a2,
        bool a3,
        int a4)
{
  int v4; // ebx
  bool v5; // zf
  struct PostProcessEffect *v6; // ebp
  char *v8; // esi
  unsigned int v9; // edi
  void *v10; // edi
  int v11[2]; // [esp+8h] [ebp-8h] BYREF

  v4 = a4;
  v5 = a4 == -1;
  v6 = a2;
  *((_BYTE *)a2 + 15) = a3;
  if ( v5 )
  {
    sub_101097A0((int)this + 64, (int)&a2);
    return v6;
  }
  else
  {
    v8 = (char *)this + 64;
    v9 = *((_DWORD *)this + 17);
    if ( v9 > *((_DWORD *)this + 18) )
      invalid_parameter_noinfo();
    v11[1] = v9;
    v10 = (void *)(v9 + 4 * v4);
    if ( (unsigned int)v10 > *((_DWORD *)v8 + 2) || (unsigned int)v10 < *((_DWORD *)v8 + 1) )
      invalid_parameter_noinfo();
    sub_10109480((int)v11, (int)v8, v10, (int)&a2);
    return v6;
  }
}
