/*
 * func-name: ?push_back@?$vector@PAVMaterial@@V?$allocator@PAVMaterial@@@std@@@std@@QAEXABQAVMaterial@@@Z
 * func-address: 0x10012aa0
 * callers: 0x10030e70, 0x10042bf0, 0x1009f170, 0x100e40e0, 0x100e42b0, 0x100f04f0, 0x101658e0, 0x10166120
 * callees: 0x100117e0
 */

_DWORD *__thiscall std::vector<Material *>::push_back(_DWORD *this, int *a2)
{
  unsigned int v3; // edx
  unsigned int v4; // ecx
  int *v5; // eax
  _DWORD *result; // eax
  char *v7; // edi
  int v8; // [esp+4h] [ebp-8h] BYREF

  v3 = this[1];
  if ( v3 )
    v4 = (int)(this[2] - v3) >> 2;
  else
    v4 = 0;
  if ( v3 && v4 < (int)(this[3] - v3) >> 2 )
  {
    v5 = (int *)this[2];
    *v5 = *a2;
    result = v5 + 1;
    this[2] = result;
  }
  else
  {
    v7 = (char *)this[2];
    if ( v3 > (unsigned int)v7 )
      invalid_parameter_noinfo();
    return std::vector<Material *>::insert(this, &v8, this, v7, a2);
  }
  return result;
}
